/*Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy
To run the code 
.\a.exe -s text.txt write.txt
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE* source, FILE* destination, int convertToUpper, int convertToLower, int convertToPureUpper) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        if (convertToUpper)
            ch = toupper(ch);
        else if (convertToLower)
            ch = tolower(ch);
        else if (convertToPureUpper)
            ch = isalpha(ch) ? toupper(ch) : ch;

        fputc(ch, destination);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    int convertToUpper = 0, convertToLower = 0, convertToPureUpper = 0;
    char *option = argv[1];

    if (option[0] == '-') {
        switch (option[1]) {
            case 'u':
                convertToUpper = 1;
                break;
            case 'l':
                convertToLower = 1;
                break;
            case 's':
                convertToPureUpper = 1;
                break;
            default:
                printf("Invalid option!\n");
                return 1;
        }
    }

    FILE *source = fopen(argv[2], "r");
    if (source == NULL) {
        printf("Unable to open source file!\n");
        return 1;
    }

    FILE *destination = fopen(argv[3], "w");
    if (destination == NULL) {
        printf("Unable to create destination file!\n");
        fclose(source);
        return 1;
    }

    copyFile(source, destination, convertToUpper, convertToLower, convertToPureUpper);

    printf("File copied successfully!\n");

    fclose(source);
    fclose(destination);

    return 0;
}

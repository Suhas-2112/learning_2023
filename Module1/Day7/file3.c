#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100


void viewData(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];

    // Read and print the header row
    if (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char* token = strtok(line, ",");
        while (token != NULL) {
            printf("%s\t", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    // Read and print the data rows
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        char* token = strtok(line, ",");
        while (token != NULL) {
            printf("%s\t", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(file);
}

int main() {
    const char* dataFilePath = "file.csv";
    viewData(dataFilePath);

    return 0;
}

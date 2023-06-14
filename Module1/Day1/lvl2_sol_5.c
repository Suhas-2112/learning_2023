#include <stdio.h>
#include <ctype.h>

int chartype(char c){
    if (isalpha(c)) { //is character alphabetic or not
        if (isupper(c)) {
            return 1; // Uppercase letter A to Z
        } else {
            return 2; // Lowercase letter a to z
        }
    } else if (isdigit(c)) {
        return 3; // Digit or number from 0 to 9
    } else if (isgraph(c)) {
        return 4; // Printable symbol
    } else if (iscntrl(c)) {//Characters that cannot be printed on the screen are known as control characters
        return 5; // Non-printable symbol
    } else {
        return 0; // Invalid character Entry
    }
}


int main() {
    char c;

    printf("Enter a character : ");

    scanf(" %c", &c);

    int type = chartype(c);

    switch (type) {
        case 1:
            printf("Uppercase letter (A to Z)\n");
            break;
        case 2:
            printf("Lowercase letter (a to z)\n");
            break;
        case 3:
            printf("Digit or number (0 to 9)\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}
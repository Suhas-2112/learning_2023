//Rotate string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function to rotate string
void rotateString(char* str, int k, char direction) {
    int length = strlen(str);
    char temp[length + 1];
    strcpy(temp, str);

//L = Left R = Right
    if (direction == 'L') {
        for (int i = 0; i < length; i++) {
            int index = (i + k) % length;
            str[i] = temp[index];
        }
    } else if (direction == 'R') {
        for (int i = 0; i < length; i++) {
            int index = (i - k + length) % length;
            str[i] = temp[index];
        }
    }
}

int main() {
    char inputString[100];
    int k;
    char direction;

    printf("Enter the input string: ");
    scanf("%s", inputString);

    printf("Enter the number of positions to rotate (K): ");
    scanf("%d", &k);

    printf("Enter the direction (L for Left, R for Right): ");
    scanf(" %c", &direction);

    rotateString(inputString, k, direction);

    printf("Rotated string: %s\n", inputString);

    return 0;
}

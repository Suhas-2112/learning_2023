/* Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 1*/

#include <stdio.h>

int isvowel(char c){
    int flag;

    switch (c) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
            flag = 1; // if Character is Vowel
            break;
        default:
            flag = 0; // if Character is Not vowel
            break;
    }

    return flag;
}

int main(){
    char c;

    printf("Enter a character : \n");
    scanf(" %c",&c);


    if(isvowel(c)){
        printf("The entered character is Vowel\n");
    }
    else{
        printf("The entered character is not Vowel\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int grade(int marks){
    switch(marks)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 75 ... 89:
            printf("Grade B");
            break;
        case 60 ... 74:
            printf("Grade C");
            break;
        case 50 ... 59:
            printf("Grade D");
            break;
        case 36 ... 49:
            printf("Grade E");
            break;
        default:
            printf("Grade F");

    }
    return 0;
}

int main(){
    int score;
    

    switch (score) {
        case 65:
            printf("Grade A\n");
            break;
        case 66:
            printf("Grade B\n");
            break;
        case 67:
            printf("Grade C\n");
            break;
        case 68:
            printf("Grade D\n");
            break;
        case 69:
            printf("Grade E\n");
            break;
        case 70:
            printf("Grade F\n");
            break;
        default:
            printf("Invalid score\n");
            break;
    }
    return 0;
}
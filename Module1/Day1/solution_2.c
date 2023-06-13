/*Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"
*/

#include <stdio.h>


int main(){
    int m; //variable to store marks
    printf("Enter the marks  of student\n");
    scanf("%d",&m);
    if(m>=90 && m<=100){
        printf("Grade A");
    }
    
    else if(m>=75 && m<=89){
        printf("Grade B");
    }
    else if(m>=60 && m<=74){
        printf("Grade C");
    }
    else if(m>=50 && m<=59){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    
}

 
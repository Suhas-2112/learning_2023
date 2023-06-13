//Program to find biggest of two numbers using ternary operator


#include <stdio.h>


int main(){

    int a,b;

    printf("Enter two numbers\n");

    scanf("%d %d",&a,&b);

    (a > b) ? printf("%d is the biggest of %d and %d",a,a,b) : printf("%d is the biggest of %d and %d",b,a,b);
       
    return 0;
}
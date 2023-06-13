//Program to find biggest of two numbers using if else


#include <stdio.h>


int main(){

    int a,b;

    printf("Enter two numbers\n");

    scanf("%d %d",&a,&b);

    if(a>b){//checking whether a is greater than b or not
        printf("%d is the biggest of %d and %d",a,a,b);
    }
    else if(a==b){//checking whether a and b are equal or not
         printf("Two numbers are equal");

    }
    else{
        printf("%d is the biggest of %d and %d",b,a,b);
    }
       
    return 0;
}
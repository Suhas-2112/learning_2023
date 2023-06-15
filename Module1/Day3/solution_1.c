/*Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234  4321
123    321
12      21
1        1

Concepts to be used.
- Loops*/

#include <stdio.h>

// Function to print from 1 to N
void one_to_N(int i){
    for(int j=1; j<=i; j++){
            printf("%d",j);
        }
}

// Function to print from N to 1
void N_to_one(int i){
    for(int k=i; k>=1; k--){
            printf("%d",k);
        }
}
// Function to print spaces in between
void space(int i,int n){
    for(int j=0; j<(n-i); j++){
        printf("  ");
    }
}
// Function to print the required pattern
void pattern1(int n){
    for(int i=n; i>=1; i--){
        one_to_N(i);
        space(i,n);
        N_to_one(i);
        printf("\n");
    }
}



int main()
{
    int num;
    printf("Enter the number N : ");
    scanf("%d",&num);
    pattern1(num); 
    
    
    return 0;      
}
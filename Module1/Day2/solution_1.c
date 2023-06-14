/*Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators

*/

#include <stdio.h>

void printexp(double num) {
    unsigned long long* ptr = (unsigned long long*)&num; 
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52; 

    // To Print in hexadecimal format
    printf("Hexadecimal exponent : 0x%llX\n", exponent);

    // To Print in binary format
    printf("Binary exponent: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long b = (exponent >> i) & 1;
        printf("%lld", b);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printexp(x);

    return 0;
}
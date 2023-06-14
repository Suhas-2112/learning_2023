/*Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting*/


#include <stdio.h>

#include <string.h>


void swap(void *a, void *b, size_t size) {
    // Create a temporary Variable to store the data
    char temp[size];

    // Copy the data from 'a' to the temporary variable
    memcpy(temp, a, size);

    // Copy the data from 'b' to 'a'
    memcpy(a, b, size);

    // Copy the data from the temporary variable to 'b'
    memcpy(b, temp, size);
}

int main() {
    char a = 'c';
    char b = 'd';

    printf("Before swap: a = %c, b = %c\n", a, b);
    // Swap the values of 'a' and 'b'
    swap(&a, &b, sizeof(char));

    printf("After swap: a = %c, b = %c\n", a, b);

    int x = 21;
    int y = 12;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Swap the values of 'x' and 'y'
    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    double p = 1.2;
    double q = 2.1;

    printf("Before swap: p = %f, q = %f\n", p, q);

    // Swap the values of 'p' and 'q'
    swap(&p, &q, sizeof(double));

    printf("After swap: p = %f, q = %f\n", p, q);


    return 0;
}

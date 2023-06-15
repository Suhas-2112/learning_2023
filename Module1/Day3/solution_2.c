/*Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators*/


#include <stdio.h>

void printbits(unsigned int num) {
    
    unsigned int mask = 1 << 31;  // Start with the MSB (leftmost)

    for (int i = 0; i < 32; i++) {
        unsigned int bit = (num & mask) ? 1 : 0;
        printf("%u", bit);
        mask >>= 1;  // Shift the mask to the right to check the next bit
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printbits(num);

    return 0;
}

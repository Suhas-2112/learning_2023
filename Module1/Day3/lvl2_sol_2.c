#include <stdio.h>

// Function to convert Decimal to BCD
void BCDConversion(int n)
{
    // Base Case
    if (n == 0) {
        printf("0000");
        return;
    }

    // To store the reverse of n
    int rev = 0;

    // Reversing the digits
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    // Iterate through all digits in rev
    while (rev > 0) {

        // Find Binary for each digit
        // using bitwise operations
        int b = rev % 10;
        int i;
        for (i = 3; i >= 0; i--) {
            int bit = (b >> i) & 1;
            printf("%d", bit);
        }
        printf(" ");

        // Divide rev by 10 for next digit
        rev /= 10;
    }
}

// Driver Code
int main()
{
    // Given Number
    int N = 12;

    // Function Call
    BCDConversion(N);
    return 0;
}

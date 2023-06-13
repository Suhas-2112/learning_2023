/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);

*/

#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        // Set 1st bit
        num |= (1 << 0);
    } else if (oper_type == 2) {
        // Clear 31st bit
        num &= ~(1 << 30);
    } else if (oper_type == 3) {
        // Toggle 16th bit
        num ^= (1 << 15);
    }

    return num;
}

int main() {
    int num, operation_type;
    printf("Enter the number (32 bits): ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operation_type);

    
    printf("Result: %d\n", bit_operations(num, operation_type));

    return 0;
}

/*Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array\n");
    for(int i = 0;i<n;i++){
      scanf("%d",&arr[i]);
   }
    
    int sum = 0;

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }

    printf("Sum of every alternate elements: %d\n", sum);

    return 0;
}
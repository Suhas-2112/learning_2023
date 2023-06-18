// C Program to Reverse an Array

#include <stdio.h>
#define N 1000

// Function to reverse the array
void reverse(int *arr, int n){
    int rarr[N];
    // Reversing the array using an auxiliary array
    for (int i = 0; i < n; i++)
    {
        rarr[i] = arr[n - i - 1];
    }

    // Copying the reversed array to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rarr[i];
    }
}

int main()
{
    int arr[N];

    int n;
    // Inputting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Inputting the array
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling the function to reverse the array
    reverse(arr, n);

    // Printing the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

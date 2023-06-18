// Array Sorting -Bubble Sort 
//Implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>


//Function to swap two numbers 
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped by inner loop,
		// then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
	
     int size;

    printf("Enter size of array\n");
    scanf("%d",&size);

    printf("Enter elements of array\n");
    int arr[size];

    
    for(int i = 0;i<size;i++){
     scanf("%d",&arr[i]);
    }
	
    bubbleSort(arr, size);
	
    printf("Sorted array: \n");
	
    printArray(arr, size);
	return 0;
}

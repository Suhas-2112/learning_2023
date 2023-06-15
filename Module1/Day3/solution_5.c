#include <stdio.h>

void smallest_Largest(int n) {
    int smallest = 0, largest = 0, temp;
    int r = 0;

    while (n > 0) {

        // Extracting the single digit every time

        temp = n % 10;

        // check if there is any single digit or same digits are repeated
        if (r == 0) {
            smallest = temp;
            largest = temp;
            r++;
        }
        
        // comparing the largest number and the smallest number

        if (temp > largest) {
            largest = temp;
        } else if (temp < smallest) {
            smallest = temp;
        }

        // Deleting the single digit every iteration

        n /= 10;
    }

    // Printing Results

    if (smallest != largest) {
        printf("%d and %d are the Smallest and Largest digit respectively.\n", smallest, largest);
    } else {
        printf("Not Valid\n");
    }
}

int main() {
    int test;
   // printf("Number of test cases : " );
   //scanf("%d",&test);
   //take test number of inputs from user
   //add while loop while(test){test--}
   //in while loop add smallest_Largest(n) function
    int n = 3;
    smallest_Largest(n);
    n = 8;
    smallest_Largest(n);
    n = 156;
    smallest_Largest(n);
    n = 123450;
    smallest_Largest(n);
    return 0;
}
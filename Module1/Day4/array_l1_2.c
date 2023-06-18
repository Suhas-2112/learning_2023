//Min & Max of 1D Array


#include <stdio.h>

//Function to calculate min of array using pointer
int min(int *ptr,int size){
    int min = ptr[0];
    for(int i =1;i<size;i++){
        if(ptr[i] < min){
            min = ptr[i];
        }
    }
    return min;
}


//Function to calculate maximum of array using pointer
int max(int *ptr,int size){
    int max = ptr[0];
    for(int i =1;i<size;i++){
        if(ptr[i] > max){
            max = ptr[i];
        }
    }
    return max;
}


int main(){
    int size;

    printf("Enter size of array\n");
    scanf("%d",&size);

    printf("Enter elements of array\n");
    int arr[size];

    for(int i = 0;i<size;i++){
     scanf("%d",&arr[i]);
    }
    int minimum =  min(arr,size); //saving output of min function
    int maximum =  max(arr,size); //saving output of max function


    //printing results
    printf("%d is the Minimum element of given array.\n",minimum);
    printf("%d is the Maximum element of given array.\n",maximum);

    return 0;

}
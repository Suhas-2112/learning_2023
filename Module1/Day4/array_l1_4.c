#include <stdio.h>

//Function to calculate sum of even elements of array
int evensum(int *ptr,int size){
    int even = 0;
    for(int i =0;i<size;i++){
        if(ptr[i]%2==0){
            even = even + ptr[i];
        }
    }
    return even;
}

//Function to calculate sum of odd elements of array
int oddsum(int *ptr,int size){
    int odd = 0;
    for(int i =0;i<size;i++){
        if(ptr[i]%2!=0){
            odd = odd + ptr[i];
        }
    }
    return odd;
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
    int even = evensum(arr,size);
    int odd = oddsum(arr,size);

    printf("Sum of even elements : %d\n",even);
    printf("Sum of odd elements : %d\n",odd);


    return 0;
}
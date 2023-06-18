#include <stdio.h>

int search(int arr[],int size,int key){
    for (int i = 0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size,key;
    printf("Enter size of array : \n");
    scanf("%d",&size);

    

    printf("Enter the elements of array : \n");


    int arr[size];

    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter key to be search : \n");
    scanf("%d",&key);

    int result = search(arr,size,key);

    (result == -1) ? printf("Key is not present in the array") : printf("Key if present at index %d ",result);
}
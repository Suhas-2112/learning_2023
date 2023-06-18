//Sum & Average of 1D Array

#include <stdio.h>

int main(){
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  int arr[n];
  for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int sum = 0;
  float avg;
  for(int i = 0;i<n;i++){
    sum+=arr[i];
  }
  avg = sum/n;
  printf("The sum of elements of array : %d\n",sum);
  printf("The average of elements of array : %f",avg);
    return 0;

}
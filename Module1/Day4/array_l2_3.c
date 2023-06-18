/*Number of Days Elapsed*/


#include <stdio.h>


int main(){
    int lookup[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dd,mm,yy,days=0;
    printf("Enter Day in dd format : \n");
    scanf("%d",&dd);
    printf("Enter MOnth in mm format : \n");
    scanf("%d",&mm);
    printf("Enter Year in yyyy format : \n");
    scanf("%d",&yy);

    for(int i =0;i<mm-1;i++){
        days+=lookup[i];
    }
    printf("No.of Days Elapsed : %d",days+dd);


    return 0;
}
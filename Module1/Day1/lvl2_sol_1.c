//biggest of three numbers
#include <stdio.h>
void big(int a,int b,int c){
    if(a>b && a>c){
        printf("%d is the largest of 3 numbers",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest of 3 numbers",b);

    }
    else{
        printf("%d is the largest of 3 numbers",c);
    }

}
int main(){
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    big(a,b,c);
    return 0;
}
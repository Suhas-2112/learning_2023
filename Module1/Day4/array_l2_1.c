#include <stdio.h>


void decimal_binary(int num){
    if(num==0){
        printf("0");
    }

    int binary[32];
    int i = 0;

    while (num>0)
    {
        binary[i++]=num%2;
        num/=2;
    }
     // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--){
      printf("%d", binary[j]);
}
}
void decimal_octal(int num){
    if(num==0){
        printf("0");
    }

    int octal[32];
    int i = 0;

    while (num>0)
    {
        octal[i++]=num%8;
        num/=8;
    }
     // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--){
      printf("%d", octal[j]);
}
}
void decimal_hex(int num){
    if(num==0){
        printf("0");
    }

    int hex[32];
    int i = 0,remainder;

    while (num != 0)
    {
        remainder = num % 16;
        if (remainder < 10)
            hex[i++] = 48 + remainder;
        else
            hex[i++] = 55 + remainder;
        num/=16;
    }
 
    // display integer into character
    for (i; i >= 0; i--){
            printf("%c", hex[i]);
    }
}

int main() {
   int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("%d in Binary : ",num);
   decimal_binary(num);
   printf("\n");
   printf("%d in Octal : ",num);
   decimal_octal(num);
   printf("\n");
   printf("%d in Hxadecimal : ",num);
   decimal_hex(num);
   return 0;
}
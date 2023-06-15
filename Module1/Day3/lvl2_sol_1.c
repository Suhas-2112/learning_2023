/*
level 2 day3
1. Bit Operations:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link, so 
a. Write a function to Set, clear and toggle bit of an 8-bit number

Concepts to be used.
- Operators
*/

#include <stdio.h>

// To  set a bit
unsigned char setbit(unsigned char num, int position)
{
   return (num | (1 << position));
}

// To clear a bit
unsigned char clearbit(unsigned char num, int position)
{
   return (num & ~(1 << position));
}

// To toggle a bit
unsigned char togglebit(unsigned char num, int position)
{
   return (num ^ (1 << position));
}


int main()
{
   unsigned char number;
   int position;

   printf("Enter an 8-bit number in hexadecimal : ");
   scanf("%hhx", &number);

   printf("Enter the bit position (0-7) : ");
   scanf("%d", &position);

   // Set
   unsigned char set_result = setbit(number, position);
   printf("Set bit result: 0x%02X\n", set_result);

   // Clear
   unsigned char clear_result = clearbit(number, position);
   printf("Clear bit result: 0x%02X\n", clear_result);

   // Toggle
   unsigned char toggle_result = togglebit(number, position);
   printf("Toggle bit result: 0x%02X\n", toggle_result);

   return 0;
}
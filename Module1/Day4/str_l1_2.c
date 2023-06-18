// C program to convert string into int using atoi() function
#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	char* str1 = "5278";

	// explicit type casting
	int res1 = atoi(str1);
	

	printf("The number in the string is %d \n", str1, res1);
	

	return 0;
}

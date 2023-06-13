/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary
*/
#include <stdio.h>

int main(){
    int phy,math,chem,total;
    float percentage;
    char name[20];
    char Roll[20];
    printf("Enter full name of the student\n");
    //scanf("%s",name);
    gets(name);
    printf("Enter Roll Number of the student\n");
    gets(Roll);
    printf("Enter Marks of Physics, Math and Chemistry\n");
    scanf("%d %d %d",&phy,&math,&chem);
    total = phy+math+chem;
    percentage = total/(3.00);
    printf("The Summary of the Student \n");
    printf("Name : ");
    //puts(name);
    printf("%s",name);
    printf("\nRoll Number : ");
    puts(Roll);
    printf("Marks-->\n");
    printf("Physics : %d\n",phy);
    printf("Maths : %d\n",math);
    printf("Chemistry : %d\n",chem);
    printf("Total marks : %d/300",total);
    printf("\nAnd scored %.3f percentage\n",percentage);
    return 0;

    


}
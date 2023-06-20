/*Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
  */
 
#include <stdio.h>

struct Complex_Number
{
    double real;
    double imaginary;

};

typedef struct Complex_Number complex;

//Function to Read complex number
void readComplexnumber(complex* ptr){
    printf("Enter the Real part of the complex number : ");
    scanf("%lf",&(ptr->real));
    printf("Enter the Imaginary part of the complex number : ");
    scanf("%lf",&(ptr->imaginary));

}

//Function to write complex number
void writeComplexnumber(complex complexn){
    printf("%.2f + %.2fi \n",complexn.real,complexn.imaginary);
}

//Function to add complex number
complex addcomplexnumber(complex *c1,complex* c2){
    complex sum;
    sum.real = c1->real + c2->real;
    sum.imaginary = c1->imaginary + c2->imaginary;
    return sum;
}

//Function to Multiply complex number
complex multiplycomplexnumber(complex *c1,complex* c2){
    complex product;
    product.real = c1->real * c2->real;
    product.imaginary = c1->real * c2->imaginary + c1->imaginary * c2->real;
    return product;
}

int main(){
    complex c1,c2,sum,product;

    printf("Enter the first Complex number : \n");
    readComplexnumber(&c1);

    printf("Enter the second Complex number : \n");
    readComplexnumber(&c2);
   
    printf("\n");

    printf("First Complex number : ");
    writeComplexnumber(c1);

    printf("\n");

    printf("Second Complex number : ");
    writeComplexnumber(c2);

    printf("\n");

    sum = addcomplexnumber(&c1,&c2);
    product = multiplycomplexnumber(&c1,&c2);

    printf("Sum of the Complex numbers : ");
    writeComplexnumber(sum);

    printf("\n");

    printf("Product of the Complex numbers : ");
    writeComplexnumber(product);







    return 0;
}

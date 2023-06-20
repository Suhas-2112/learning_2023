/* Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
    */

#include <stdio.h>

struct Box
{
    double length;
    double width;
    double height;

};

typedef struct Box Box;

//Function to calculate Volume of the Box
void calVolume(Box* ptr){
    double volume = ptr->height * ptr->length * ptr->width;
    printf("Volume of the Box : %.2f",volume);
}

//Function to calculate Total Surface Area of the Box
void totalSurfaceArea(Box* ptr){
    double tsa = 2*(ptr->height * ptr->length + ptr->length * ptr->width + ptr->height * ptr->width);
    printf("Total surface area of the Box : %.2f",tsa);
}

int main(){
    Box b1;

    //access the members using (.) operator
    b1.height = 20;
    b1.length = 30;
    b1.width = 50;
    Box*ptr = &b1;
    calVolume(ptr);
    printf("\n");
    totalSurfaceArea(ptr);

    printf("\n");
    
    
    //access the members using (->) operator
    
    ptr->height = 54;
    ptr->length = 45;
    ptr->width = 35;
    calVolume(ptr);
    printf("\n");
    totalSurfaceArea(ptr);

    return 0;
}





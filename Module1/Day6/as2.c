#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
        int rollno;
        char name[20];
        float marks;
    };

typedef struct Student Student;

//Functio to initialize structure members

void initializeStudents(Student* students, int nStudents) {
    for (int i = 0; i < nStudents; i++) {
        students[i].rollno = 007;
        strcpy(students[i].name, "Suhas");
        students[i].marks = 100.00;
    }
}

int main() {
    int numStudents ;

    printf("Enter the number of students:\n");
    scanf("%d",&numStudents);

    Student students[numStudents];

    initializeStudents(students, numStudents);
    
    for (int i = 0; i < numStudents; i++) {
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

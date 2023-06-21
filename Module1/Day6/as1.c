/*Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

    Note: User must be able define the no. of inputs/size of the array during runtime.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
        int rollno;
        char name[20];
        float marks;
    };

typedef struct Student student;

void parseStr(const char* inputString,student* students,int nstudents){
    const char* delimiter = " ";
    char* inputCopy = strdup(inputString);
    char* token = strtok(inputCopy, delimiter);
    int count = 0;

    while (token != NULL && count<nstudents)
    {
        students[count].rollno = atoi(token);
        token = strtok(NULL, delimiter);
        if (token == NULL) {
            printf("Invalid input string\n");
            free(inputCopy);
            return;
        }

        strncpy(students[count].name, token, sizeof(students[count].name) - 1);
        students[count].name[sizeof(students[count].name) - 1] = '\0';

        token = strtok(NULL, delimiter);
         if (token == NULL) {
            printf("Invalid input string\n");
            free(inputCopy);
            return;
        }
        students[count].marks = atof(token);

        count++;
    }

    free(inputCopy);

    if (count != nstudents) {
        printf("Invalid input string\n");
        return;
    }

    printf("Array of structures initialized successfully.\n");


    }
    
int main() {
    const char* inputString = "1001 Aron 100.00";
    int numStudents = 1;
    struct Student students[numStudents];

    parseStr(inputString, students, numStudents);

    // Print the initialized array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}



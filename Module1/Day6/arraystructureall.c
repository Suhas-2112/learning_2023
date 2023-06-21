#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int size) {
    char tempString[100];
    strncpy(tempString, inputString, sizeof(tempString));
    tempString[sizeof(tempString) - 1] = '\0';

    const char* delimiter = " ";
    char* token = strtok(tempString, delimiter);
    int i = 0;

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        if (token == NULL) break;

        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';

        token = strtok(NULL, delimiter);
        if (token == NULL) break;

        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
}

void initializeStructures(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        students[i].name[0] = '\0';
        students[i].marks = 0.0f;
    }
}

void displayStructures(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

void sortByMarksDescending(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int searchByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    const char* inputString = "1001 Aron 100.00 1002 Bob 95.50 1003 Claire 98.75";
    int size = 3;
    struct Student students[size];

    parseString(inputString, students, size);
    printf("Parsed and initialized the array of structures.\n");

    printf("Displaying all members:\n");
    displayStructures(students, size);

    sortByMarksDescending(students, size);
    printf("Sorted array of structures in descending order based on marks:\n");
    displayStructures(students, size);

    const char* searchName = "Bob";
    int index = searchByName(students, size, searchName);
    if (index != -1) {
        printf("Found '%s' at index %d\n", searchName, index);
    } else {
        printf("'%s' not found.\n", searchName);
    }

    return 0;
}

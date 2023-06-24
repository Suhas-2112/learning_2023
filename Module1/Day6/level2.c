#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

// Function to parse the input string and initialize an array of structures
void parseStringToStructArray(const char* input, struct Student* students, int size) {
    char* inputCopy = strdup(input);  // Create a non-const copy of the input string
    const char* delimiter = " ";
    char* token = strtok(inputCopy, delimiter);
    int i = 0;
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strcpy(students[i].name, token);

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
    free(inputCopy);  // Free the dynamically allocated inputCopy
}


// Function to initialize all members in the array of structures
void initializeStructArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

// Function to display all members in the array of structures
void displayStructArray(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollno, students[i].name, students[i].marks);
    }
}

// Comparison function for sorting in descending order based on marks
int compareDescending(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    
    if (studentA->marks > studentB->marks)
        return -1;
    else if (studentA->marks < studentB->marks)
        return 1;
    else
        return 0;
}

// Function to sort the array of structures in descending order based on marks
void sortStructArrayDescending(struct Student* students, int size) {
    qsort(students, size, sizeof(struct Student), compareDescending);
}

// Function to perform a search operation on the array of structures based on the name of the student
void searchByName(const struct Student* students, int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Found student: Roll No: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollno, students[i].name, students[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

// Function to add a member at the end of the array of structures
void addMember(struct Student** students, int* size, const struct Student* newStudent) {
    (*size)++;
    *students = (struct Student*)realloc(*students, (*size) * sizeof(struct Student));
    (*students)[(*size) - 1] = *newStudent;
}

// Function to delete a member at the start of the array of structures
void deleteMember(struct Student** students, int* size) {
    if (*size > 0) {
        for (int i = 0; i < (*size) - 1; i++) {
            (*students)[i] = (*students)[i + 1];
        }
        (*size)--;
        *students = (struct Student*)realloc(*students, (*size) * sizeof(struct Student));
    }
}

// Function to swap two members in different indexes of the array of structures
void swapMembers(struct Student* students, int index1, int index2) {
    struct Student temp = students[index1];
    students[index1] = students[index2];
    students[index2] = temp;
}

// Function to rotate the array of structures by K positions
void rotateStructArray(struct Student* students, int size, int k) {
    struct Student* temp = (struct Student*)malloc(k * sizeof(struct Student));
    
    for (int i = 0; i < k; i++) {
        temp[i] = students[i];
    }
    
    for (int i = k; i < size; i++) {
        students[i - k] = students[i];
    }
    
    for (int i = 0; i < k; i++) {
        students[size - k + i] = temp[i];
    }
    
    free(temp);
}

int main() {
    const char* input = "1001 Aron 100.00 1002 Bob 95.50 1003 Claire 88.25";
    int numStudents = 3;
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    
    parseStringToStructArray(input, students, numStudents);
    
    printf("Original Struct Array:\n");
    displayStructArray(students, numStudents);
    
    printf("\nInitializing Struct Array:\n");
    initializeStructArray(students, numStudents);
    displayStructArray(students, numStudents);
    
    printf("\nAdding a member at the end of the Struct Array:\n");
    struct Student newStudent = {1004, "David", 92.75};
    addMember(&students, &numStudents, &newStudent);
    displayStructArray(students, numStudents);
    
    printf("\nDeleting a member at the start of the Struct Array:\n");
    deleteMember(&students, &numStudents);
    displayStructArray(students, numStudents);
    
    printf("\nSwapping two members in different indexes:\n");
    swapMembers(students, 0, 1);
    displayStructArray(students, numStudents);
    
    printf("\nRotating the Struct Array by 2 positions:\n");
    rotateStructArray(students, numStudents, 2);
    displayStructArray(students, numStudents);
    
    printf("\nSorting Struct Array in descending order based on marks:\n");
    sortStructArrayDescending(students, numStudents);
    displayStructArray(students, numStudents);
    
    printf("\nSearching Struct Array by name:\n");
    searchByName(students, numStudents, "David");
    
    free(students);
    
    return 0;
}

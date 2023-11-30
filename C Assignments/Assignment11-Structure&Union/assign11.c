#include <stdio.h>
#include <stdlib.h>

// Task 1: Calculate and write the size of the given structures
struct stud {
    int num;
    char nm[15];
    float marks[5];
};

struct emp {
    int empno;
    char nm[15];
    float sal, pf, hrs;
};

// Task 2: Define a structure data type called time_struct
struct time_struct {
    int hour;
    int minute;
    int second;
};

// Task 3: Define a structure called cricket
struct cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

// Task 4: Define a structure for student information
struct student {
    char name[50];
    int idno;
    float marks;
};

// Function to compare marks for sorting
int compareMarks(const void *a, const void *b) {
    return (*(struct student *)a).marks - (*(struct student *)b).marks;
}

int main() {
    // Task 1: Size of structures
    printf("Size of struct stud: %lu bytes\n", sizeof(struct stud));
    printf("Size of struct emp: %lu bytes\n", sizeof(struct emp));

    // Task 2: Assign values to time_struct and display the time
    struct time_struct currentTime = {16, 40, 51};
    printf("Current time: %02d:%02d:%02d\n", currentTime.hour, currentTime.minute, currentTime.second);

    // Task 3: Read information about cricket players and print team-wise list
    struct cricket players[3];
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf("%s", players[i].playerName);
        printf("Team Name: ");
        scanf("%s", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    printf("\nTeam-wise list:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Team: %s, Player: %s, Average: %.2f\n", players[i].teamName, players[i].playerName, players[i].battingAverage);
    }

    // Task 4: Read information about N students and print in ascending order of marks
    int n;
    printf("\nEnter the number of students (N): ");
    scanf("%d", &n);

    struct student students[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID No: ");
        scanf("%d", &students[i].idno);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort students based on marks
    qsort(students, n, sizeof(struct student), compareMarks);

    printf("\nStudents with marks in ascending order:\n");
    for (int i = 0; i < n; ++i) {
        printf("Name: %s, ID No: %d, Marks: %.2f\n", students[i].name, students[i].idno, students[i].marks);
    }

    // Theoretical Answers
    printf("\nTheoretical Answers:\n");

    // Q-1: What is structure? Differentiate between structure and union:
    printf("Q-1: Structure is a composite data type in C that allows you to group variables of different data types under a single name. "
           "It is used to represent a record. Differentiate between structure and union: "
           "In a structure, each member has its own storage location, whereas in a union, all members share the same memory location.\n");

    // Q-2: Differentiate between structure and array:
    printf("Q-2: A structure is a composite data type that can store variables of different data types under a single name. "
           "An array is a collection of elements of the same data type stored in contiguous memory locations. "
           "While a structure can have members of different data types, array elements are of the same data type.\n");

    // Q-3: What are compile-time errors and runtime errors? Explain with an example.
    printf("Q-3: Compile-time errors occur during the compilation of a program and prevent it from being successfully compiled. "
           "These errors are detected by the compiler. Runtime errors occur during the execution of a program. "
           "An example of a compile-time error is a syntax error, and an example of a runtime error is dividing by zero.\n");

    // Q-4: What are the different storage classes supported by C?
    printf("Q-4: The different storage classes supported by C are:\n"
           "1. auto: The default storage class for local variables.\n"
           "2. register: Similar to auto, but suggests the compiler to store the variable in a register.\n"
           "3. static: Preserves the value of a variable between function calls.\n"
           "4. extern: Used for global variables to declare the variable that is defined in another file.\n");

    return 0;
}

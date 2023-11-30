#include <stdio.h>

// Function to read and store names and marks of students in a file
void storeStudentInfo(int n) {
    FILE *file;
    file = fopen("student_info.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < n; ++i) {
        char name[50];
        int marks;

        printf("Enter name and marks for student %d: ", i + 1);
        scanf("%s %d", name, &marks);

        fprintf(file, "%s %d\n", name, marks);
    }

    printf("Student information has been stored in student_info.txt.\n");

    fclose(file);
}

// Function to read numbers, find odd and even numbers, and store them in separate files
void storeOddEvenNumbers(int n) {
    FILE *inputFile, *oddFile, *evenFile;
    inputFile = fopen("numbers.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < n; ++i) {
        int num;

        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        fprintf(inputFile, "%d\n", num);
    }

    fclose(inputFile);

    // Open files for storing odd and even numbers
    inputFile = fopen("numbers.txt", "r");
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (inputFile == NULL || oddFile == NULL || evenFile == NULL) {
        printf("Error opening files.\n");
        return;
    }

    // Read from input file, find odd and even numbers, and store them in separate files
    while (fscanf(inputFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    printf("Odd and even numbers have been stored in odd.txt and even.txt.\n");

    fclose(inputFile);
    fclose(oddFile);
    fclose(evenFile);
}

int main() {
    int n;

    // Task 1: Read and store names and marks of students in a file
    printf("Enter the number of students: ");
    scanf("%d", &n);
    storeStudentInfo(n);

    // Task 2: Read numbers, find odd and even numbers, and store them in separate files
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    storeOddEvenNumbers(n);

    return 0;
}

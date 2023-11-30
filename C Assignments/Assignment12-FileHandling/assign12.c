#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to read a string from a file
void readStringFromFile(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("String read from file: %s\n", buffer);

    fclose(file);
}

// Function to write a string into a file
void writeStringToFile(const char *fileName, const char *str) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", str);

    fclose(file);
}

// Function to read, sort, and write numbers to files
void readSortWriteNumbers() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    FILE *unsortFile = fopen("unsort.txt", "w");
    if (unsortFile == NULL) {
        perror("Error opening unsort.txt");
        free(numbers);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; ++i) {
        fprintf(unsortFile, "%d ", numbers[i]);
    }

    fclose(unsortFile);

    // Sorting numbers
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    FILE *sortFile = fopen("sort.txt", "w");
    if (sortFile == NULL) {
        perror("Error opening sort.txt");
        free(numbers);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; ++i) {
        fprintf(sortFile, "%d ", numbers[i]);
    }

    fclose(sortFile);

    printf("Contents of unsort.txt:\n");
    readStringFromFile("unsort.txt");

    printf("Contents of sort.txt:\n");
    readStringFromFile("sort.txt");

    free(numbers);
}

// Structure to store student information
struct Student {
    int grNo;
    char name[50];
    char books[3][50];
};

// Function to display student information
void displayStudentInfo(struct Student *students, int n) {
    printf("Student Information:\n");
    for (int i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("  GR Number: %d\n", students[i].grNo);
        printf("  Name: %s\n", students[i].name);
        printf("  Books:\n");
        for (int j = 0; j < 3; ++j) {
            printf("    %s\n", students[i].books[j]);
        }
    }
}

// Function to read student information and display
void readStudentInfo() {
    int n = 5;
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    printf("Enter information for at least 5 students:\n");
    for (int i = 0; i < n; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("  GR Number: ");
        scanf("%d", &students[i].grNo);
        printf("  Name: ");
        scanf("%s", students[i].name);
        printf("  Enter book names for any three subjects:\n");
        for (int j = 0; j < 3; ++j) {
            printf("    Book %d: ", j + 1);
            scanf("%s", students[i].books[j]);
        }
    }

    displayStudentInfo(students, n);

    free(students);
}

// Structure for customer information
struct Customer {
    char name[50];
    char phoneNumber[15];
};

// Function to generate a data file for Elecon company
void generateCustomerDataFile() {
    struct Customer customers[] = {
        {"John Doe", "1234567890"},
        {"Alice Smith", "9876543210"},
        {"Bob Johnson", "8765432109"}
    };

    FILE *file = fopen("customer_data.txt", "w");
    if (file == NULL) {
        perror("Error opening customer_data.txt");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < sizeof(customers) / sizeof(customers[0]); ++i) {
        fprintf(file, "%s %s\n", customers[i].name, customers[i].phoneNumber);
    }

    fclose(file);

    printf("Customer data file 'customer_data.txt' created successfully.\n");
}

// Function to answer the theoretical question
void answerTheoreticalQuestion() {
    printf("Q.1 What are the different file opening modes? Explain in detail.\n");
    printf("File opening modes in C:\n");
    printf("- 'r': Read (file must exist)\n");
    printf("- 'w': Write (create/truncate file)\n");
    printf("- 'a': Append (create or open for writing at end of file)\n");
    printf("- 'r+': Read and write (file must exist)\n");
    printf("- 'w+': Read and write (create/truncate file)\n");
    printf("- 'a+': Read and append (create or open for reading and writing at end)\n");
}

int main() {
    // Question 1
    printf("1. Read a string from a file:\n");
    readStringFromFile("example_file.txt");

    // Question 2
    printf("\n2. Write a string into a file:\n");
    writeStringToFile("output_file.txt", "Hello, this is a test string.");

    // Question 3
    printf("\n3. Read, sort, and write numbers to files:\n");
    readSortWriteNumbers();

    // Question 4
    printf("\n4. Maintain information of at least 5 students:\n");
    readStudentInfo();

    // Question 5
    printf("\n5. Generate a data file for Elecon company:\n");
    generateCustomerDataFile();

    // Theory Question
    printf("\nTheory Question:\n");
    answerTheoreticalQuestion();

    return 0;
}

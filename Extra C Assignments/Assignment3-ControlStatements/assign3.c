#include <stdio.h>

// Function to check whether a number is positive or negative
void checkPositiveNegative(int number) {
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }
}

// Function to check whether a year is a leap year or not
void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

// Function to calculate total, percentage, and grade
void calculateResult(int rollNo, char name[], int marks1, int marks2, int marks3) {
    int totalMarks = marks1 + marks2 + marks3;
    float percentage = (float)totalMarks / 3;

    printf("\nStudent Information:\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Marks: %d, %d, %d\n", marks1, marks2, marks3);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    // Determine the grade
    if (percentage > 70) {
        printf("Grade: A\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: B\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
}

// Function to display month name using switch case
void displayMonthName(int month) {
    switch (month) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number\n");
    }
}

// Function to display the number of days for a given month using switch case
void displayMonthDays(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days: 31\n"); break;
        case 4: case 6: case 9: case 11:
            printf("Number of days: 30\n"); break;
        case 2:
            printf("Number of days: 28 or 29 (leap year)\n"); break;
        default: printf("Invalid month number\n");
    }
}

int main() {
    // Task 1
    printf("1. Check whether a given number is positive or negative:\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkPositiveNegative(number);

    // Task 2
    printf("\n2. Check whether a given year is a leap year or not:\n");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    checkLeapYear(year);

    // Task 3
    printf("\n3. Read roll no, name, and marks of three subjects and calculate total, percentage, and grade:\n");
    int rollNo, marks1, marks2, marks3;
    char name[50];
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf("%s", name);  // Note: scanf may not handle spaces in names correctly
    printf("Enter Marks of Subject 1: ");
    scanf("%d", &marks1);
    printf("Enter Marks of Subject 2: ");
    scanf("%d", &marks2);
    printf("Enter Marks of Subject 3: ");
    scanf("%d", &marks3);
    calculateResult(rollNo, name, marks1, marks2, marks3);

    // Task 4
    printf("\n4. Read any Month Number and display Month name:\n");
    int month;
    printf("Enter Month Number: ");
    scanf("%d", &month);
    displayMonthName(month);

    // Task 5
    printf("\n5. Read any Month Number and display the number of days for this month:\n");
    printf("Enter Month Number: ");
    scanf("%d", &month);
    displayMonthDays(month);

    return 0;
}

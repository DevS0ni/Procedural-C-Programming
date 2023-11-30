#include <stdio.h>

// Function to check whether a number is positive or negative
void checkPositiveNegative(int num) {
    if (num >= 0) {
        if (num == 0) {
            printf("The given number is zero.\n");
        } else {
            printf("The given number is positive.\n");
        }
    } else {
        printf("The given number is negative.\n");
    }
}

// Function to check whether a year is a leap year
void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

// Function to calculate total, percentage, and grade based on marks
void calculateResult(int rollNo, char name[], int marks1, int marks2, int marks3) {
    int totalMarks = marks1 + marks2 + marks3;
    float percentage = (float)totalMarks / 3.0;

    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

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

// Function to display month name based on month number
void displayMonthName(int monthNumber) {
    switch (monthNumber) {
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

// Function to display the number of days in a month
void displayMonthDays(int monthNumber) {
    switch (monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days: 31\n"); break;
        case 4: case 6: case 9: case 11:
            printf("Number of days: 30\n"); break;
        case 2:
            printf("Number of days: 28 or 29\n"); break;
        default:
            printf("Invalid month number\n");
    }
}

int main() {
    // Test cases
    printf("1. Check whether a given number is positive or negative:\n");
    checkPositiveNegative(10);
    checkPositiveNegative(-5);

    printf("\n2. Check whether a given year is a leap year or not:\n");
    checkLeapYear(2020);
    checkLeapYear(2021);

    printf("\n3. Calculate total, percentage, and grade based on marks:\n");
    calculateResult(101, "John", 85, 90, 78);

    printf("\n4. Display month name based on month number:\n");
    displayMonthName(3);
    displayMonthName(12);

    printf("\n5. Display the number of days for a month based on month number:\n");
    displayMonthDays(7);
    displayMonthDays(2);

    return 0;
}

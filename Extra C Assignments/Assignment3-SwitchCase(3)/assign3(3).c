#include <stdio.h>

// Function to print day of week using switch case
void printDayOfWeek(int day) {
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}

// Function to print number of days in a month using switch case
void printDaysInMonth(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days in month %d: 31\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Number of days in month %d: 30\n", month);
            break;
        case 2:
            printf("Number of days in month %d: 28 or 29 (leap year)\n", month);
            break;
        default:
            printf("Invalid month\n");
    }
}

// Function to check vowel or consonant using switch case
void checkVowelConsonant(char ch) {
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }
}

// Function to find maximum between two numbers using switch case
void findMaximum(int num1, int num2) {
    switch (num1 > num2 ? 1 : (num1 < num2 ? -1 : 0)) {
        case 1:
            printf("%d is the maximum between %d and %d.\n", num1, num1, num2);
            break;
        case -1:
            printf("%d is the maximum between %d and %d.\n", num2, num1, num2);
            break;
        case 0:
            printf("Both numbers are equal.\n");
            break;
    }
}

// Function to check positive, negative, or zero using switch case
void checkPositiveNegativeZero(int num) {
    switch (num > 0 ? 1 : (num < 0 ? -1 : 0)) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case -1:
            printf("%d is negative.\n", num);
            break;
        case 0:
            printf("%d is zero.\n", num);
            break;
    }
}

// Function to create a simple calculator using switch case
void simpleCalculator(int num1, int num2, char operator) {
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
}

int main() {
    int day, month, num1, num2;
    char ch, operator;

    // Task 1: Print day of week using switch case
    printf("Enter a day (1-7): ");
    scanf("%d", &day);
    printDayOfWeek(day);

    // Task 2: Print number of days in a month using switch case
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printDaysInMonth(month);

    // Task 3: Check vowel or consonant using switch case
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkVowelConsonant(ch);

    // Task 4: Find maximum between two numbers using switch case
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    findMaximum(num1, num2);

    // Task 5: Check positive, negative, or zero using switch case
    printf("Enter a number: ");
    scanf("%d", &num1);
    checkPositiveNegativeZero(num1);

    // Task 6: Create a simple calculator using switch case
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operator);
    simpleCalculator(num1, num2, operator);

    return 0;
}

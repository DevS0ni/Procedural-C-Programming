#include <stdio.h>

// Function to find the maximum between two numbers
int findMaxBetweenTwo(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum between three numbers using nested if
int findMaxBetweenThree(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

// Function to check positive, negative, or zero using simple if statement
void checkPosNegZero(int num) {
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
}

// Function to check divisibility of any number by 5 or 11
void checkDivisibility(int num) {
    if (num % 5 == 0 || num % 11 == 0) {
        printf("Divisible by 5 or 11\n");
    } else {
        printf("Not divisible by 5 or 11\n");
    }
}

// Function to check even or odd number
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

// Function to check Leap Year
void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
}

// Function to check whether a character is alphabet or not
void checkAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet\n");
    } else {
        printf("Not an Alphabet\n");
    }
}

// Function to check whether a character is vowel or consonant
void checkVowelConsonant(char ch) {
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
}

// Function to check alphabet, digit, or special character
void checkAlphaDigitSpecial(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }
}

// Function to check whether a character is uppercase or lowercase
void checkUpperCaseLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Not an Alphabet\n");
    }
}

// Function to print day name of week
void printDayName(int day) {
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

// Function to print number of days in a month
void printDaysInMonth(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
}

// Function to calculate profit or loss
void calculateProfitLoss(float costPrice, float sellingPrice) {
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
}

int main() {
    // Test each function
    int num1, num2, num3;
    char ch;
    int year, month, day;
    float costPrice, sellingPrice;

    // Task 1: Find maximum between two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Maximum between %d and %d: %d\n", num1, num2, findMaxBetweenTwo(num1, num2));

    // Task 2: Find maximum between three numbers using nested if
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Maximum between %d, %d, and %d: %d\n", num1, num2, num3, findMaxBetweenThree(num1, num2, num3));

    // Task 3: Check positive, negative, or zero using simple if statement
    printf("Enter a number: ");
    scanf("%d", &num1);
    checkPosNegZero(num1);

    // Task 4: Check divisibility of any number by 5 or 11
    printf("Enter a number: ");
    scanf("%d", &num1);
    checkDivisibility(num1);

    // Task 5: Check even or odd number
    printf("Enter a number: ");
    scanf("%d", &num1);
    checkEvenOdd(num1);

    // Task 6: Check Leap Year
    printf("Enter a year: ");
    scanf("%d", &year);
    checkLeapYear(year);

    // Task 7: Check whether a character is alphabet or not
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkAlphabet(ch);

    // Task 8: Check whether a character is vowel or consonant
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkVowelConsonant(ch);

    // Task 9: Check alphabet, digit, or special character
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkAlphaDigitSpecial(ch);

    // Task 10: Check whether a character is uppercase or lowercase
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkUpperCaseLowerCase(ch);

    // Task 11: Print day name of week
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    printDayName(day);

    // Task 12: Print number of days in a month
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    printDaysInMonth(month);

    // Task 13: Calculate profit or loss
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    calculateProfitLoss(costPrice, sellingPrice);

    return 0;
}

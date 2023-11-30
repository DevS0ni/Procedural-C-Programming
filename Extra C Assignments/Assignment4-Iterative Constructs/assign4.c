#include <stdio.h>

// Function to display n terms of natural numbers and their multiplication
void displayNaturalNumbers(int n) {
    printf("1. Display n terms of natural numbers and their multiplication:\n");

    int multiplication = 1;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", i);
        multiplication *= i;
    }

    printf("\nMultiplication: %d\n", multiplication);
}

// Function to display n terms of odd natural numbers and their sum
void displayOddNumbersSum(int n) {
    printf("\n2. Display n terms of odd natural numbers and their sum:\n");

    int sum = 0;
    for (int i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum: %d\n", sum);
}

// Function to determine and print Fibonacci series
void displayFibonacciSeries(int num) {
    printf("\n3. Display Fibonacci series for num = %d:\n", num);

    int a = 1, b = 1, c;
    printf("%d %d ", a, b);

    for (int i = 3; i <= num; ++i) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
}

// Function to make a pattern like a pyramid with an asterisk
void displayPyramidPattern(int rows) {
    printf("\n4. Make a pattern like a pyramid with an asterisk:\n");

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    // Task 1
    int n1;
    printf("Enter the value of n for natural numbers: ");
    scanf("%d", &n1);
    displayNaturalNumbers(n1);

    // Task 2
    int n2;
    printf("\nEnter the value of n for odd natural numbers: ");
    scanf("%d", &n2);
    displayOddNumbersSum(n2);

    // Task 3
    int num;
    printf("\nEnter the value of num for Fibonacci series: ");
    scanf("%d", &num);
    displayFibonacciSeries(num);

    // Task 4
    int rows;
    printf("\nEnter the number of rows for the pyramid pattern: ");
    scanf("%d", &rows);
    displayPyramidPattern(rows);

    return 0;
}

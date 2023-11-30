#include <stdio.h>

// Function to print numbers from 1 to the entered number
void printNumbers(int num) {
    printf("Numbers from 1 to %d: ", num);
    for (int i = 1; i <= num; ++i) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to calculate and print factorial of a number
void calculateFactorial(int num) {
    long long factorial = 1;
    printf("%d! = ", num);
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
        printf("%d", i);
        if (i < num) {
            printf(" * ");
        }
    }
    printf(" = %lld\n", factorial);
}

// Function to determine and print Fibonacci series
void printFibonacci(int num) {
    printf("Fibonacci series for %d terms: ", num);
    int first = 1, second = 1, next;
    for (int i = 1; i <= num; ++i) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

// Function to calculate and print a series
void calculateSeries(int num) {
    printf("Series for %d terms: +1", num);
    int sum = 1;
    for (int i = 2; i <= num; ++i) {
        if (i % 2 == 0) {
            printf("-%d", i);
            sum -= i;
        } else {
            printf("+%d", i);
            sum += i;
        }
    }
    printf("=%d\n", sum);
}

// Function to calculate and print tables of a number
void printTables(int num) {
    printf("Tables for %d:\n", num);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;

    // Question 1
    printf("1. Enter a number: ");
    scanf("%d", &num);
    printNumbers(num);

    // Question 2
    printf("\n2. Enter a number: ");
    scanf("%d", &num);
    calculateFactorial(num);

    // Question 3
    printf("\n3. Enter the number of terms for Fibonacci series: ");
    scanf("%d", &num);
    printFibonacci(num);

    // Question 4
    printf("\n4. Enter a number: ");
    scanf("%d", &num);
    calculateSeries(num);

    // Question 5
    printf("\n5. Enter a number for tables: ");
    scanf("%d", &num);
    printTables(num);

    return 0;
}

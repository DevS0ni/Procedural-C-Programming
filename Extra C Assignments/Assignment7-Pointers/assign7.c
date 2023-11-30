#include <stdio.h>

// Function to add two numbers using pointers
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

// Function to find the maximum number between two numbers using a pointer
void findMaximum(int *a, int *b, int *max) {
    *max = (*a > *b) ? *a : *b;
}

// Function to swap two elements using pointers
void swapElements(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the factorial of a given number using pointers
void factorial(int *n, int *result) {
    *result = 1;
    for (int i = 1; i <= *n; ++i) {
        *result *= i;
    }
}

int main() {
    int num1, num2, sum, max, result, swap1, swap2;

    // Task 1: Add two numbers using pointers
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);
    addNumbers(&num1, &num2, &sum);
    printf("Sum of %d and %d: %d\n", num1, num2, sum);

    // Task 2: Find the maximum number between two numbers using a pointer
    printf("\nEnter two numbers to find the maximum: ");
    scanf("%d %d", &num1, &num2);
    findMaximum(&num1, &num2, &max);
    printf("Maximum between %d and %d: %d\n", num1, num2, max);

    // Task 3: Swap two elements using pointers
    printf("\nEnter two elements to swap: ");
    scanf("%d %d", &swap1, &swap2);
    swapElements(&swap1, &swap2);
    printf("Swapped elements: %d and %d\n", swap1, swap2);

    // Task 4: Find the factorial of a given number using pointers
    printf("\nEnter a number to find its factorial: ");
    scanf("%d", &num1);
    factorial(&num1, &result);
    printf("Factorial of %d: %d\n", num1, result);

    return 0;
}

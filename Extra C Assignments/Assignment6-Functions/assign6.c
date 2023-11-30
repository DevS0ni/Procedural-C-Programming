#include <stdio.h>

// Function to swap two numbers
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform arithmetic operations
void arithmeticOperations(int a, int b) {
    printf("\nArithmetic Operations:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    // Avoid division by zero
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
        printf("Modulo: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division by zero is undefined.\n");
    }
}

// Function to find the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num1, num2;

    // Task 1: Swap two numbers
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);
    swapNumbers(&num1, &num2);
    printf("Swapped numbers: %d and %d\n", num1, num2);

    // Task 2: Arithmetic Operations
    printf("\nEnter two numbers for arithmetic operations: ");
    scanf("%d %d", &num1, &num2);
    arithmeticOperations(num1, num2);

    // Task 3: Find factorial of a number
    int factorialNum;
    printf("\nEnter a number to find its factorial: ");
    scanf("%d", &factorialNum);
    int result = factorial(factorialNum);
    printf("Factorial of %d: %d\n", factorialNum, result);

    return 0;
}

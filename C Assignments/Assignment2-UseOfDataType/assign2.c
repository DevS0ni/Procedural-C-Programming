#include <stdio.h>

// PROGRAMS

// 1. Write a program to read two numbers from the user and perform the following operations:
//    - ADDITION
//    - SUBTRACTION
//    - MULTIPLICATION
//    - DIVISION
void arithmeticOperations() {
    float num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Performing operations
    printf("ADDITION: %.2f\n", num1 + num2);
    printf("SUBTRACTION: %.2f\n", num1 - num2);
    printf("MULTIPLICATION: %.2f\n", num1 * num2);

    // Checking if the second number is not zero to avoid division by zero
    if (num2 != 0) {
        printf("DIVISION: %.2f\n", num1 / num2);
    } else {
        printf("DIVISION: Cannot divide by zero\n");
    }
}

// 2. Write a C program to read and display the population of the world (Use long int)
void displayWorldPopulation() {
    // Using long int to handle large numbers
    long int worldPopulation = 7837000000; // Example value

    printf("World Population: %ld\n", worldPopulation);
}

// 3. Write a C program to exchange the value of two variables.
void exchangeValues() {
    int a, b;

    // Taking input from the user
    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    printf("Enter the value of 'b': ");
    scanf("%d", &b);

    // Exchanging values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Displaying the exchanged values
    printf("After exchanging values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

// THEORY

// Explain the DataTypes in detail.
/*
   Data Types in C:

   1. Basic Data Types:
      - int: Integer type (e.g., 5, -10)
      - float: Floating-point type (e.g., 3.14, -0.5)
      - double: Double-precision floating-point type (e.g., 3.14159, -0.567)
      - char: Character type (e.g., 'A', 'b', '1')

   2. Derived Data Types:
      - Array: A collection of elements of the same type
      - Pointer: A variable that stores the address of another variable
      - Structure: A user-defined data type that groups related data items
      - Union: A data type that allows storing different data types in the same memory location

   3. Void Data Type:
      - void: Represents the absence of type or an incomplete type

   C provides a range of data types to handle different types of data, and each data type has its
   specific size and range. The choice of data type depends on the nature of the data and the
   operations to be performed on it.
*/

// MAIN function
int main() {
    // Calling the programs
    arithmeticOperations();
    displayWorldPopulation();
    exchangeValues();

    return 0;
}

#include <stdio.h>

// Function to print the given design
void printDesign() {
    printf("* * * * *      * * * * *       * * * * *\n");
    printf("    *          *                   *\n");
    printf("    *          *                   *\n");
    printf("    *          *                   *\n");
    printf("* * * * *      * * * * *           *\n");
}

// Function to find the size of int, float, double, char, and long int
void findSize() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
}

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    // 1. Print the given design
    printf("1. Print the given design:\n");
    printDesign();

    // 2. Find the size of int, float, double, char, and long int
    printf("\n2. Find the size of int, float, double, char, and long int:\n");
    findSize();

    // 3. Calculate simple interest
    printf("\n3. Calculate simple interest:\n");
    float principal = 1000.0, rate = 5.0;
    int time = 2;
    float interest = calculateSimpleInterest(principal, rate, time);
    printf("Principal: $%.2f, Rate: %.2f%%, Time: %d years\n", principal, rate, time);
    printf("Simple Interest: $%.2f\n", interest);

    return 0;
}

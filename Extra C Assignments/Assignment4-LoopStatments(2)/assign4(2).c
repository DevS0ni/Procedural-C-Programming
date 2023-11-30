#include <stdio.h>

// Function to print all natural numbers from 1 to n
void printNaturalNumbers(int n) {
    printf("Natural numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to print all alphabets from a to z
void printAlphabets() {
    printf("Alphabets from a to z: ");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");
}

// Function to print all even numbers from 1 to n
void printEvenNumbers(int n) {
    printf("Even numbers from 1 to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to find sum of natural numbers between 1 to n
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function to print the sum of all odd numbers from 1 to n
void printSumOfOddNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sum);
}

// Function to print the sum of all odd numbers in a given range
void printSumOfOddNumbersInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers in the range %d to %d: %d\n", start, end, sum);
}

// Function to print the multiplication table of a number
void printMultiplicationTable(int num) {
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to count the number of digits in an integer
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to find the last digit of a number
int findLastDigit(int num) {
    return num % 10;
}

// Function to find the first digit of a number
int findFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

// Function to find the sum of the first and last digit of a number using a loop
int sumOfFirstAndLastDigit(int num) {
    int lastDigit = num % 10;
    int firstDigit;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    return firstDigit + lastDigit;
}

// Function to find the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the reverse of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to find the power of any number using a for loop
long long powerOfNumber(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate factorial of a number
long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

int main() {
    // Test each function
    int n, start, end, num, base, exponent;

    // Task 1: Print all natural numbers from 1 to n
    printf("Enter a value of n: ");
    scanf("%d", &n);
    printNaturalNumbers(n);

    // Task 2: Print all alphabets from a to z
    printAlphabets();

    // Task 3: Print all even numbers from 1 to n
    printf("Enter a value of n: ");
    scanf("%d", &n);
    printEvenNumbers(n);

    // Task 4: Find sum of natural numbers between 1 to n
    printf("Enter a value of n: ");
    scanf("%d", &n);
    printf("Sum of natural numbers from 1 to %d: %d\n", n, sumOfNaturalNumbers(n));

    // Task 5: Print the sum of all odd numbers from 1 to n
    printf("Enter a value of n: ");
    scanf("%d", &n);
    printSumOfOddNumbers(n);

    // Task 6: Print the sum of all odd numbers in given range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printSumOfOddNumbersInRange(start, end);

    // Task 7: Print multiplication table of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printMultiplicationTable(num);

    // Task 8: Count number of digits in an integer
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits in %d: %d\n", num, countDigits(num));

    // Task 9: Find last digit of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Last digit of %d: %d\n", num, findLastDigit(num));

    // Task 10: Find first digit of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("First digit of %d: %d\n", num, findFirstDigit(num));

    // Task 11: Find sum of first and last digit of a number using loop
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first and last digit of %d: %d\n", num, sumOfFirstAndLastDigit(num));

    // Task 12: Find sum of digits of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d: %d\n", num, sumOfDigits(num));

    // Task 13: Find reverse of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d: %d\n", num, reverseNumber(num));

    // Task 14: Find power of any number using for loop
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("Power of %d raised to %d: %lld\n", base, exponent, powerOfNumber(base, exponent));

    // Task 15: Calculate factorial of a number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d: %lld\n", num, calculateFactorial(num));

    return 0;
}

#include <stdio.h>

// ASSIGN1 - PROGRAMS

// 1. Write a C program to print Hello on the screen.
void program1() {
    printf("Hello\n");
}

// 2. Write a program to print Hello, How are you, and Good morning in different lines.
void program2() {
    printf("Hello\n");
    printf("How are you\n");
    printf("Good morning\n");
}

// 3. Write a program to print the following design using printf( )
void program3() {
    printf("*       *  *  *\n");
    printf("*       *\n");
    printf("*  *   *  *  *\n");
    printf("         *     *\n");
    printf("*  *   *     *\n");
}

// 4. Write a program to read a number from the keyboard and display it.
void program4() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Entered number: %d\n", num);
}

// 5. Write a program to calculate simple interest. (SI=(P*R*N)/100)
void program5() {
    float principle, rate, time, simpleInterest;

    // Taking input from the user
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    simpleInterest = (principle * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest: %.2f\n", simpleInterest);
}

// 6. Relation between Celsius and Fahrenheit is governed by the formula
//    F = 9C/5 + 32
//    Write a program to convert the temperature
//    • From Celsius to Fahrenheit and
//    • From Fahrenheit to Celsius.
void program6() {
    float celsius, fahrenheit;

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
}

// 7. Find out the error in the following program:
//    #include<stdio.h>
//    #include<conio.h>
//    void main()
//    {
//        int a=10;
//        printf("%d",a);
//        printf("%d",b);
//    }

// The error in the above program is the undeclared variable 'b'.

// THEORY

// 1. Write the History of C, Importance of C, Structure of C.
//    [Answer in comments]

/*
   The C programming language was created by Dennis Ritchie in 1972 at Bell Labs.
   Importance of C:
   - C is a widely-used, general-purpose programming language.
   - It provides low-level access to memory, which makes it suitable for system programming.
   - It has a simple syntax, making it easy to learn for beginners.
   - C has influenced many modern programming languages.

   Structure of C:
   - A C program consists of functions.
   - Functions contain statements that define actions to be performed.
   - The main() function is the entry point of a C program.
   - Statements are terminated by semicolons (;).
   - Curly braces ({}) define the scope of functions and control structures.
*/

// 2. What is variables? Explain in detail.
//    [Answer in comments]

/*
   Variables are named storage locations in a program that hold data. In C, variables must be declared
   before they are used, specifying their type. The declaration provides information about the type of
   data a variable can hold.

   Example of variable declaration:
   int age;  // declares an integer variable named 'age'

   Variables have a scope, which is the region of the program where the variable can be accessed.
   The lifetime of a variable is the duration during which it exists in memory.

   Variables in C can be of different types, such as int, float, double, char, etc. Each type determines
   the size and format of the data that can be stored.

   Usage of variables involves assigning values to them and performing operations using those values.

   Example:
   age = 25;  // assigns the value 25 to the 'age' variable
   printf("Age: %d\n", age);  // prints the value of 'age'
*/

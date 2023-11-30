#include <stdio.h>

// Function to find the largest and smallest number in a 1-D array
void findMinMax(int arr[], int size) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);
}

// Function to reverse a 1-D array
void reverseArray(int arr[], int size) {
    printf("Array in reverse order:\n");
    for (int i = size - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the sum of elements in a 1-D array
void arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
}

// Function to find odd numbers in a 1-D array
void findOddNumbers(int arr[], int size) {
    printf("Odd numbers in the array:\n");
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Function to find even numbers in a 1-D array
void findEvenNumbers(int arr[], int size) {
    printf("Even numbers in the array:\n");
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

// Function to find prime numbers in a 1-D array
void findPrimeNumbers(int arr[], int size) {
    printf("Prime numbers in the array:\n");
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Function to sort an array in ascending order
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the largest and smallest number in a 2-D array
void findMinMax2D(int arr[][3], int rows, int cols) {
    int max = arr[0][0], min = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Largest number in 2-D array: %d\n", max);
    printf("Smallest number in 2-D array: %d\n", min);
}

// Function to arrange the whole 2-D array in ascending and descending order
void arrange2DArray(int arr[][3], int rows, int cols) {
    // Flatten the 2-D array to a 1-D array for sorting
    int flattenedArr[rows * cols];
    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            flattenedArr[index++] = arr[i][j];
        }
    }

    // Sort the flattened array in ascending order
    sortAscending(flattenedArr, rows * cols);
    index = 0;

    // Fill the 2-D array with the sorted values (ascending)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = flattenedArr[index++];
        }
    }

    printf("2-D array in ascending order:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Sort the flattened array in descending order
    sortDescending(flattenedArr, rows * cols);
    index = 0;

    // Fill the 2-D array with the sorted values (descending)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = flattenedArr[index++];
        }
    }

    printf("2-D array in descending order:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 1-D Array
    int arr1D[] = {5, 3, 8, 2, 7};
    int size1D = sizeof(arr1D) / sizeof(arr1D[0]);

    // Question 1
    printf("1. Find and print the largest and smallest number from a 1-D array:\n");
    findMinMax(arr1D, size1D);

    // Question 2
    printf("\n2. Arrange and print the 1-D array in reverse order:\n");
    reverseArray(arr1D, size1D);

    // Question 3
    printf("\n3. Take a 1-D array of 5 numbers and display the sum of all array elements:\n");
    arraySum(arr1D, size1D);

    // Question 4
    printf("\n4. Enter 10 numbers in a 1-D array and provide a menu for various operations:\n");
    int arrMenu[10];
    int sizeMenu = sizeof(arrMenu) / sizeof(arrMenu[0]);

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < sizeMenu; ++i) {
        scanf("%d", &arrMenu[i]);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Odd numbers\n");
        printf("2. Even numbers\n");
        printf("3. Prime numbers\n");
        printf("4. All numbers in ascending order\n");
        printf("5. All numbers in descending order\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                findOddNumbers(arrMenu, sizeMenu);
                break;
            case 2:
                findEvenNumbers(arrMenu, sizeMenu);
                break;
            case 3:
                findPrimeNumbers(arrMenu, sizeMenu);
                break;
            case 4:
                sortAscending(arrMenu, sizeMenu);
                printf("Numbers in ascending order:\n");
                for (int i = 0; i < sizeMenu; ++i) {
                    printf("%d ", arrMenu[i]);
                }
                printf("\n");
                break;
            case 5:
                sortDescending(arrMenu, sizeMenu);
                printf("Numbers in descending order:\n");
                for (int i = 0; i < sizeMenu; ++i) {
                    printf("%d ", arrMenu[i]);
                }
                printf("\n");
                break;
            case 0:
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    // 2-D Array
    int arr2D[3][3] = {{5, 8, 2}, {3, 1, 6}, {7, 4, 9}};
    int rows = sizeof(arr2D) / sizeof(arr2D[0]);
    int cols = sizeof(arr2D[0]) / sizeof(arr2D[0][0]);

    // Question 1 (2-D Array)
    printf("\n1. Find and print the largest and smallest number from a 2-D array:\n");
    findMinMax2D(arr2D, rows, cols);

    // Question 2 (2-D Array)
    printf("\n2. Arrange the whole 2-D array in ascending and descending order:\n");
    arrange2DArray(arr2D, rows, cols);

    return 0;
}

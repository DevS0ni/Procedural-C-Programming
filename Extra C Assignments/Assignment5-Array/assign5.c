#include <stdio.h>

// Function to read n number of values in an array and display it in reverse order
void readAndDisplayReverse(int arr[], int n) {
    printf("1. Read n number of values in an array and display it in reverse order:\n");

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the maximum and minimum element in an array
void findMaxAndMin(int arr[], int n) {
    printf("\n2. Find the maximum and minimum element in an array:\n");

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
}

// Function to separate odd and even integers in separate arrays
void separateOddEven(int arr[], int n, int oddArr[], int evenArr[], int *oddCount, int *evenCount) {
    printf("\n3. Separate odd and even integers in separate arrays:\n");

    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenArr[*evenCount] = arr[i];
            (*evenCount)++;
        } else {
            oddArr[*oddCount] = arr[i];
            (*oddCount)++;
        }
    }
}

// Function for subtraction of two matrices
void subtractMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    printf("\n4. Subtraction of two matrices:\n");

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Subtracting matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Displaying the result matrix
    printf("Resultant matrix after subtraction:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Task 1
    int n;
    printf("Enter the value of n for array: ");
    scanf("%d", &n);
    int arr1[n];
    readAndDisplayReverse(arr1, n);

    // Task 2
    int arr2[] = {5, 12, 7, 25, 18};
    int size = sizeof(arr2) / sizeof(arr2[0]);
    findMaxAndMin(arr2, size);

    // Task 3
    int n3, oddCount, evenCount;
    printf("\n3. Enter the value of n for array to separate odd and even integers: ");
    scanf("%d", &n3);
    int arr3[n3], oddArr[n3], evenArr[n3];
    separateOddEven(arr3, n3, oddArr, evenArr, &oddCount, &evenCount);

    printf("Odd integers: ");
    for (int i = 0; i < oddCount; ++i) {
        printf("%d ", oddArr[i]);
    }
    printf("\nEven integers: ");
    for (int i = 0; i < evenCount; ++i) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    // Task 4
    int rows4, cols4;
    printf("\n4. Enter the number of rows for matrices: ");
    scanf("%d", &rows4);
    printf("Enter the number of columns for matrices: ");
    scanf("%d", &cols4);
    int mat1[10][10], mat2[10][10], result[10][10];
    subtractMatrices(mat1, mat2, result, rows4, cols4);

    return 0;
}

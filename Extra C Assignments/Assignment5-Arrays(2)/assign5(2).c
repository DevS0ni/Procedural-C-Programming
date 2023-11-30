#include <stdio.h>

// Function to read and print elements in an array
void readAndPrintArray(int arr[], int n) {
    printf("1. Read and print elements in an array:\n");

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the sum of all elements in an array
int findSum(int arr[], int n) {
    printf("\n2. Find sum of all elements in an array:\n");

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    return sum;
}

// Function to find the second largest number in an array
int findSecondLargest(int arr[], int n) {
    printf("\n3. Find second largest number in an array:\n");

    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

// Function to copy one array to another array
void copyArray(int source[], int destination[], int n) {
    printf("\n4. Copy one array to another array:\n");

    for (int i = 0; i < n; ++i) {
        destination[i] = source[i];
    }

    printf("Copied array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", destination[i]);
    }
    printf("\n");
}

// Function to print array in reverse order
void printReverse(int arr[], int n) {
    printf("\n5. Print array in reverse order:\n");

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort elements of array in ascending order
void sortArrayAscending(int arr[], int n) {
    printf("\n6. Sort elements of array in ascending order:\n");

    // Using bubble sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n for array: ");
    scanf("%d", &n);
    int arr[n];

    // Task 1
    readAndPrintArray(arr, n);

    // Task 2
    int sum = findSum(arr, n);
    printf("Sum of array elements: %d\n", sum);

    // Task 3
    int secondLargest = findSecondLargest(arr, n);
    printf("Second largest number: %d\n", secondLargest);

    // Task 4
    int copiedArr[n];
    copyArray(arr, copiedArr, n);

    // Task 5
    printReverse(arr, n);

    // Task 6
    sortArrayAscending(arr, n);

    return 0;
}

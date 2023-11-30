#include <stdio.h>

// Task 1: Function to interchange the values of two variables
void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Task 3: Function to sort an array of five numbers using pointers
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements if they are in the wrong order
                exchange(arr + j, arr + j + 1);
            }
        }
    }
}

// Task 4: Function to print array elements in reverse order using pointers
void printReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; --i) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Task 5: Function to return the name of the corresponding day
const char* day_name(int n) {
    static const char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    if (n >= 0 && n < 7) {
        return days[n];
    } else {
        return "Invalid day";
    }
}

int main() {
    // Task 2: Output of the given program
    int i, j = 25;
    int *pj, *pi;
    pj = &j;
    printf("%p %d %p %d\n", (void*)pj, *pj, (void*)&j, j);
    *pj = j + 5;
    pi = pj;
    *pi = i + j;
    printf("%d %d\n", *pi, i);

    // Task 3: Sorting an array of five numbers
    int numbers[5];
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }
    sortArray(numbers, 5);
    printf("Sorted numbers: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Task 4: Printing array elements in reverse order
    printf("Array elements in reverse order: ");
    printReverse(numbers, 5);

    // Task 5: Using day_name function
    int dayNumber;
    printf("Enter a day number (0-6): ");
    scanf("%d", &dayNumber);
    const char* day = day_name(dayNumber);
    printf("Day name: %s\n", day);

    return 0;
}

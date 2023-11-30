#include <stdio.h>

// Function to print the first pattern
void pattern1(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= 1; --j) {
            if (j > i) {
                printf("  ");
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

// Function to print the second pattern
void pattern2(int n) {
    int num = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

// Function to print the third pattern
void pattern3(int n) {
    for (int i = 1; i <= n; ++i) {
        int num = i;
        for (int j = 1; j <= i; ++j) {
            printf("%d ", num);
        }
        printf("\n");
    }
}

// Function to print the fourth pattern
void pattern4(int n) {
    int k = 0;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("# ");
            k++;
        }
        k = 0;
        printf("\n");
    }
}

// Function to print the fifth pattern
void pattern5(int n) {
    int space = n - 1;
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < space; ++j) {
            printf(" ");
        }
        space--;

        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    space = 1;
    for (int i = n - 2; i >= 0; i -= 2) {
        for (int j = 0; j < space; ++j) {
            printf(" ");
        }
        space++;

        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Question 1
    printf("1. First Pattern:\n");
    pattern1(4);

    // Question 2
    printf("\n2. Second Pattern:\n");
    pattern2(4);

    // Question 3
    printf("\n3. Third Pattern:\n");
    pattern3(4);

    // Question 4
    printf("\n4. Fourth Pattern:\n");
    pattern4(3);

    // Question 5
    printf("\n5. Fifth Pattern:\n");
    pattern5(5);

    return 0;
}

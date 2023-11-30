#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[], char result[]) {
    int i, j;

    // Copy the first string to the result
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    // Concatenate the second string to the result
    for (j = 0; str2[j] != '\0'; ++j, ++i) {
        result[i] = str2[j];
    }

    // Add the null terminator to the result
    result[i] = '\0';
}

// Function to sort an array of strings in alphabetical order
void sortStrings(char names[][50], int n) {
    char temp[50];

    // Bubble sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap strings if they are in the wrong order
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

// Function to count words, vowels, digits, and white spaces in a string
void countCharacters(char str[]) {
    int words = 0, vowels = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    // Assuming consecutive non-space characters form a word
    words = spaces + 1;

    printf("Number of words: %d\n", words);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of digits: %d\n", digits);
    printf("Number of white spaces: %d\n", spaces);
}

// Function to reverse a string
void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = len - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to convert a string to lowercase
void toLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
    }
}

// Function to append a string at a specific location
void appendString(char original[], char toAppend[], int position, char result[]) {
    int i, j;

    // Copy the original string up to the specified position
    for (i = 0; i < position; ++i) {
        result[i] = original[i];
    }

    // Concatenate the string to append
    for (j = 0; toAppend[j] != '\0'; ++j, ++i) {
        result[i] = toAppend[j];
    }

    // Concatenate the remaining part of the original string
    for (int k = position; original[k] != '\0'; ++k, ++i) {
        result[i] = original[k];
    }

    // Add the null terminator to the result
    result[i] = '\0';
}

// Function to replace a word in a string
void replaceWord(char str[], char oldWord[], char newWord[], char result[]) {
    int i = 0, j, found = 0;

    while (str[i] != '\0') {
        // Check if the current position matches the start of the old word
        if (str[i] == oldWord[0]) {
            // Check if the rest of the string matches the old word
            j = 1;
            while (oldWord[j] != '\0' && str[i + j] == oldWord[j]) {
                ++j;
            }

            // If the entire old word is found, replace it with the new word
            if (oldWord[j] == '\0') {
                found = 1;
                for (j = 0; newWord[j] != '\0'; ++j, ++i) {
                    result[i] = newWord[j];
                }
            }
        }

        // If the old word is not found at the current position, copy the character as it is
        if (!found) {
            result[i] = str[i];
            ++i;
        } else {
            // If the old word is found, skip the characters corresponding to the old word
            while (str[i] != ' ' && str[i] != '\0') {
                ++i;
            }
            found = 0;
        }
    }

    // Add the null terminator to the result
    result[i] = '\0';
}

// Function to compare two strings with case sensitivity
int compareStringsCaseSensitive(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        ++i;
    }

    // If one string is shorter than the other
    return str1[i] - str2[i];
}

// Function to compare two strings without case sensitivity
int compareStringsIgnoreCase(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i] && str1[i] + 32 != str2[i] && str1[i] - 32 != str2[i]) {
            return str1[i] - str2[i];
        }
        ++i;
    }

    // If one string is shorter than the other
    return str1[i] - str2[i];
}

int main() {
    // Question 1
    printf("1. Enter your name and surname, add both strings, and print the result:\n");
    char name[50], surname[50], fullName[100];
    printf("Enter your name: ");
    gets(name);  // Note: gets() is used for simplicity; it's unsafe for user input in practice
    printf("Enter your surname: ");
    gets(surname);
    concatenateStrings(name, surname, fullName);
    printf("Combined name: %s\n", fullName);

    // Question 2
    printf("\n2. Sort five names entered by the user in alphabetical order:\n");
    char userNames[5][50];
    for (int i = 0; i < 5; ++i) {
        printf("Enter name %d: ", i + 1);
        gets(userNames[i]);  // Note: gets() is used for simplicity; it's unsafe for user input in practice
    }
    sortStrings(userNames, 5);
    printf("Sorted names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", userNames[i]);
    }

    // Question 3
    printf("\n3. Count number of words, vowels, digits, and white spaces in a line of text:\n");
    char text[500];
    printf("Enter a line of text: ");
    gets(text);  // Note: gets() is used for simplicity; it's unsafe for user input in practice
    countCharacters(text);

    // Question 4
    printf("\n4. Enter your name and print it in reverse order:\n");
    char myName[50];
    printf("Enter your name: ");
    gets(myName);  // Note: gets() is used for simplicity; it's unsafe for user input in practice
    printf("Reversed name: ");
    reverseString(myName);

    // Question 5
    printf("\n5. Perform operations on a string:\n");
    char originalStr[100], modifiedStr[100];
    printf("Enter a string: ");
    gets(originalStr);  // Note: gets() is used for simplicity; it's unsafe for user input in practice

    // 1) Upper Lower
    printf("1) Convert to lowercase:\n");
    toLowercase(originalStr);
    printf("%s\n", originalStr);

    // 2) Append string
    char appendString[50];
    printf("2) Append a string at a specific location. Enter string to append: ");
    gets(appendString);  // Note: gets() is used for simplicity; it's unsafe for user input in practice
    int position;
    printf("Enter the position to append: ");
    scanf("%d", &position);
    appendString(originalStr, appendString, position, modifiedStr);
    printf("Appended string: %s\n", modifiedStr);

    // 3) Replace word
    char oldWord[50], newWord[50];
    printf("3) Replace a word. Enter the word to replace: ");
    scanf("%s", oldWord);
    printf("Enter the new word: ");
    scanf("%s", newWord);
    replaceWord(originalStr, oldWord, newWord, modifiedStr);
    printf("Modified string: %s\n", modifiedStr);

    // 4) String compare (case sensitive)
    char str1[100], str2[100];
    printf("4) String compare (case sensitive). Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int caseSensitiveComparison = compareStringsCaseSensitive(str1, str2);
    if (caseSensitiveComparison == 0) {
        printf("Strings are equal (case sensitive).\n");
    } else {
        printf("Strings are not equal (case sensitive). Difference at position: %d\n", caseSensitiveComparison);
    }

    // 5) String compare (case insensitive)
    printf("5) String compare (case insensitive). Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int caseInsensitiveComparison = compareStringsIgnoreCase(str1, str2);
    if (caseInsensitiveComparison == 0) {
        printf("Strings are equal (case insensitive).\n");
    } else {
        printf("Strings are not equal (case insensitive). Difference at position: %d\n", caseInsensitiveComparison);
    }

    return 0;
}

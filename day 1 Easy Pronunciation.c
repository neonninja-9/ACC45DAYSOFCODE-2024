/*Easy Pronunciation
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the length of your word: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of n characters
    char *arr = (char *)malloc(n * sizeof(char));

    // Check if the memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Return an error code
    }

    // Input elements into the array
    printf("Enter your word: \n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    // Check if the word is hard to pronounce
    int consonants = 0;
    for (int i = 0; i < n; i++) {
        if (!(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')) {
            consonants++;
            if (consonants == 4) {
                printf("Your word is hard to pronounce.\n");
                break;
            }
        } else {
            consonants = 0;
        }
    }

    if (consonants < 4) {
        printf("Your word is easy to pronounce.\n");
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

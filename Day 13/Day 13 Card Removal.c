/*
## Problem Statement: Card Removal

**Given:**
* A set of N cards, each with a number written on it.
* The number on the ith card is A_i.

**Goal:**
* Determine the minimum number of moves required to ensure that all remaining cards have the same number.
* A move consists of removing any single card from the table.

**Example:**
* If the cards have the numbers [1, 2, 2, 3], the minimum number of moves is 2. We can remove the cards with numbers 1 and 3 to leave only cards with the number 2.
.*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int N;
        scanf("%d", &N);
        int A[N], freq[11] = {0}; // array to store frequency of numbers 1 to 10
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            freq[A[i]]++; // increment frequency of the number A[i]
        }

        int maxFreq = 0;
        for (int i = 1; i <= 10; i++) { // loop through possible numbers (1 to 10)
            if (freq[i] > maxFreq) {
                maxFreq = freq[i]; // find the maximum frequency
            }
        }

        printf("%d\n", N - maxFreq); // minimum moves = total cards - max frequency
    }
    return 0;
}
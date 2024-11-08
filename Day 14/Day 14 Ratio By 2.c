/*
Problem:

Given two positive integers X and Y, find the minimum number of operations required to ensure that either X is at least twice as large as Y, or Y is at least twice as large as X. In one operation, you can change the value of one of the integers by 1 or -1.

Solution:

The key observation is that to achieve the desired condition, the difference between X and Y needs to become at least twice the smaller value.

Let's denote the smaller value as min(X, Y) and the larger value as max(X, Y).

The minimum number of operations required is equal to:

ceil((max(X, Y) - 2 * min(X, Y)) / 2)
Explanation:

max(X, Y) - 2 * min(X, Y) calculates the difference between the larger value and twice the smaller value.
Dividing this difference by 2 gives us the minimum number of operations needed to make the difference at least twice the smaller value.
ceil() is used to round up the result to the nearest integer, as we need a whole number of operations.
Example:

If X = 5 and Y = 3:

min(X, Y) = 3
max(X, Y) = 5
(max(X, Y) - 2 * min(X, Y)) / 2 = (5 - 2 * 3) / 2 = -1 / 2
ceil(-1 / 2) = 1
Therefore, the minimum number of operations required to make either X at least twice as large as Y, or Y at least twice as large as X, is 1.

Time complexity:

O(1) as the solution involves a constant number of arithmetic operations.

Space complexity:

O(1) as the solution does not require any additional data structures.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int T, X, Y;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        int min = X < Y ? X : Y;
        int max = X > Y ? X : Y;

        int operations = ceil((max - (2 * min)) / 2.0);

        printf("%d\n", operations);
    }

    return 0;
}
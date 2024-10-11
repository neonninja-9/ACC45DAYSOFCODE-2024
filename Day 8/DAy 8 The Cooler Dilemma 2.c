/*
---

The Cooler Dilemma 2

The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:
- Rent a cooler at the cost of X coins per month.
- Purchase a cooler for Y coins.

Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.

### Input Format
- The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains two integers X and Y, as described in the problem statement.

### Output Format
For each test case, output the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.

If Chef should not rent a cooler at all, output 0.

---
*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", (y - 1) / x);
        /*To get the correct number of months, consider what happens when we divide Y by X:

If you just do Y / X, you get the largest integer n such that n * X ≤ Y. But this would include cases where the total rent cost equals the purchase price, i.e., n * X = Y, which violates the "strictly less than" condition.

To ensure strict inequality (n * X < Y), we subtract 1 from Y before dividing by X. This forces the result to only include months where the total rental cost is strictly less than the purchasing cost.*/
    }

    return 0;
}
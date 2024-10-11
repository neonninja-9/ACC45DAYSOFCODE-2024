/*

**A or B**

There are two problems in a contest.

- Problem A is worth 500 points at the start of the contest.
- Problem B is worth 1000 points at the start of the contest.

Once the contest starts, after each minute:

- Maximum points of Problem A reduce by 2 points.
- Maximum points of Problem B reduce by 4 points.

It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

---

**Input Format**

- The first line will contain T, the number of test cases. Then the test cases follow.
- Each test case contains a single line of input, two integers X and Y — the time required to solve Problems A and B in minutes, respectively.

**Output Format**
For each test case, output in a single line, the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

*/
#include <stdio.h>


int main()
{
    int T;// Number of test cases
    scanf("%d", &T); // Input number of test cases

    while (T--)
    {
        int x, y, score_A_first, score_B_first, max_score;

        // Input time for solving problem A and B
        scanf("%d %d", &x, &y);

        // Calculate scores in both orders
        score_A_first = (500 - (2 * x)) + (1000 - (4 * (x + y)));
        score_B_first = (1000 - (4 * y)) + (500 - (2 * (x + y)));

        // Ensure scores are non-negative
        if (score_A_first < 0)
            score_A_first = 0;
        if (score_B_first < 0)
            score_B_first = 0;

        // Determine the maximum score Chef can achieve
        max_score = (score_A_first > score_B_first) ? score_A_first : score_B_first;

        // Output the maximum score for this test case
        printf("%d\n", max_score);
    }

    return 0;
}

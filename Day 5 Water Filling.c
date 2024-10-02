/*
---

**Water Filling**

Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

You are given three integers - \(B_1\), \(B_2\), and \(B_3\).

- If \(B_1 = 1\), it means that the first bottle is full.
- If \(B_1 = 0\), it means that the first bottle is empty.
- Similarly, \(B_2\) denotes whether the second bottle is full or empty, and \(B_3\) denotes it for the third bottle.

Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

---

**Input Format**

- The first line of input will contain a single integer \(T\), denoting the number of test cases.
- The only line of each test case contains three space-separated integers, \(B_1\), \(B_2\), \(B_3\).

---

**Output Format**

For each test case, output on a new line, either "Water filling time", or "Not now".*/
#include <stdio.h>

int main()
{
    printf("enter the status of bottels \nEnter 0 if empty & 1 if filled\n");
    int B1;
    printf("Enter the input fo B1:");
    scanf("%d", &B1);
    int B2;
    printf("Enter the input for B2:");
    scanf("%d", &B2);
    int B3;
    printf("Enter the input for B3:");
    scanf("%d", &B3);
    // input check
    if (B1 < 2 && B1 >= 0 && B2 < 2 && B2 >= 0 && B3 < 2 && B3 >= 0)
    {
        if (B1 == 1 && B2 == 0 && B3 == 0)
        {
            printf("Water filling time\n");
        }
        else if (B1 == 0 && B2 == 1 && B3 == 0)
        {
            printf("Water filling time\n");
        }
        else if (B1 == 0 && B2 == 0 && B3 == 1)
        {
            printf("Water filling time\n");
        }
        else if (B1 == 0 && B2 == 0 && B3 == 0)
        {
            printf("fill imidiatly\n");
        }
        else if (B1 == 0 && B2 == 1 && B3 == 1)
        {
            printf("Not now\n");
        }
        else if (B1 == 1 && B2 == 0 && B3 == 1)
        {
            printf("Not now\n");
        }
        else if (B1 == 1 && B2 == 1 && B3 == 0)
        {
            printf("Not now\n");
        }
        else if (B1 == 1 && B2 == 1 && B3 == 1)
        {
            printf("chill for now\n");
        }
    }else
    {
        printf("invalid input!\n");
    }

    return 0;
}

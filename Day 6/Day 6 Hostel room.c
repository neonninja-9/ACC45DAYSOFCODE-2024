/*

---

**Hostel Room**

There are initially X people in a room.

You are given an array A of length N which describes the following events:

- If A_i >= 0 then A_i people enter the room at the i-th minute. For example, if A_2 = 3, then 3 people enter the room at the 2nd minute.
- If A_i < 0, then |A_i| people leave the room at the i-th minute. Here, |A_i| denotes the absolute value of A_i. For example, if A_4 = -2, then 2 people leave the room at the 4th minute.

Determine the **maximum number** of people in the room at any moment of time.

It is guaranteed in the input that at any moment of time, the number of people in the room does not become negative.

---

**Input Format**

- The first line will contain T — the number of test cases. Then the test cases follow.
- The first line of each test case consists of two integers N and X — the length of the array A and the number of people in the room initially.
- The second line of each test case contains N integers A_1, A_2, A_3, \dots, A_N.

---

**Output Format**

For each test case, output the maximum number of people in the room at any point of time.

---

**Constraints**

- 1 \leq T \leq 100
- 1 \leq N \leq 100
- 0 \leq X \leq 100
- -100 \leq A_i \leq 100

---*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, x, max_people;

    printf("Enter the number of test cases: "); // Number of test cases
    scanf("%d", &t);

    // Taking observation minutes and initial number of people in the room
    printf("Enter the length of the array and the number of people in the room: ");
    scanf("%d %d", &n, &x);

    // Creating an array of length n
    int *people_count = (int *)malloc(n * sizeof(int));

    // Taking data for each minute
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number of people entering/leaving the room at %dth time: ", i + 1);
        scanf("%d", &people_count[i]);
    }

    for (int i = 0; i <= t; i++)
    {
        if (people_count[i] > 0)
        {
            max_people = x + people_count[i];
        }
        else if (people_count < 0)
        {
            max_people = x - people_count[i];
        }
    }

    printf("Maximum number of people at %dth time in the room :%d \n", t, max_people);
    // Free allocated memory
    free(people_count);

    return 0;
}

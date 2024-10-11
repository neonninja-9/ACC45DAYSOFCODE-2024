
/*

---

**Pseudo Sorted Array**

An array A of length N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once:
- Choose an i such that 1 < i < (N - 1) and swap A_i and A_{i+1}.

Given an array A, determine if it is pseudo-sorted or not.

---


*/
#include <stdio.h>

int main()
{
    int n, i, j, k, flag = 0, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
            if (count > 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, pos = 0, neg = 0;
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        if (neg > pos)
        {
            if ((neg - pos) % 2 == 0)
            {
                printf("%d\n", (neg - pos) / 2);
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (pos > neg)
        {
            if ((pos - neg) % 2 == 0)
            {
                printf("%d\n", (pos - neg) / 2);
            }
            else
            {
                printf("-1\n");
            }
        }
        else // neg == pos
        {
            printf("0\n");
        }

        free(arr);
    }

    return 0;
}
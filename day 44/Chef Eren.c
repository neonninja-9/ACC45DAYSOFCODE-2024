#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, time = 0;
        scanf("%d %d %d", &n, &a, &b);

        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                time += a;
            }
            else
            {
                time += b;
            }
        }

        printf("%d\n", time);
    }

    return 0;
}
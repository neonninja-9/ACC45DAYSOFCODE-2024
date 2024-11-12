#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, count = 0;
        scanf("%d %d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
           
        }
        for (int i = 0; i < n; i++)
        {
            a[i] += k;
            if ((a[i] % 7) == 0)
            {
                count++;
            }
           
        }
        printf("%d\n", count);
    }

    return 0;
}
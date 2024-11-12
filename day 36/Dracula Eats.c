#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int u = n / 7;
        int v = n % 7;
        if (v >= 2)
        {
            printf("%d\n", u + 1);
        }
        else
        {
            printf("%d\n", u);
        }
    }

    return 0;
}
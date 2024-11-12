#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int c, d;
        scanf("%d %d", &c, &d);
        if (a <= c && b <= d)
        {
            printf("POSSIBLE");
        }
        else
        {
            printf("IMPOSSIBLE");
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, x, y;
        scanf("%d %d %d", &h, &x, &y);
        int u = h - y;
        int attacks = u / x;
        if (u % x == 0)
        {
            printf("%d\n", (attacks + 1));
        }
        else
        {
            printf("%d\n", (attacks + 2));
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, a, b;
        scanf("%d %d %d", &x, &a, &b);
        if ((a + 2 * b) >= x)
        {
            printf("Qualify\n");
        }
        else
        {
            printf("NOtQualify\n");
        }
    }

    return 0;
}
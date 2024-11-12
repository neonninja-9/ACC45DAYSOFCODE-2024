#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r1, r2, r3, r4;
        scanf("%d %d %d %d", &r1, &r2, &r3, &r4);
        if (r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0)
        {
            printf("IN\n");
        }
        else if (r1 == 1 && r2 == 1 && r3 == 1 && r4 == 1)
        {
            printf("OUT\n");
        }
        else if (r1 == 1 || r2 == 1 || r3 == 1 || r4 == 1)
        {
            printf("OUT\n");
        }
    }

    return 0;
}
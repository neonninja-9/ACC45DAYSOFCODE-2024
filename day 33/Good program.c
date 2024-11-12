#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 4 == 0)
        {
            printf("GOOD\n");
        }
        else
        {
            printf("NOT GOOD\n");
        }
    }

    return 0;
}
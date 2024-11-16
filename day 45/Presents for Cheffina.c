#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int total = n - (n / 5);
        printf("%d", total);
    }

    return 0;
}
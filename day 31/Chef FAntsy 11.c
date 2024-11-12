#include <stdio.h>
#include <math.h>

int combinations(int n)
{
    return (tgamma(n + 1) / tgamma(n - 1));
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d", combinations(n));
    }

    return 0;
}
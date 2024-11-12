#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, turn;
        scanf("%d %d", &a, &b);
        turn = a + b;
        if ((turn / 2) % 2 == 0)
        {
            printf("alice\n");
        }
        else
        {
            printf("bob\n");
        }
    }
    return 0;
}
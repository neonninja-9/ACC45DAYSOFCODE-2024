/*Expert Setter
A problem setter is called an expert if at least
50
%
50% of their problems are approved by Chef.

Munchy submitted
X
X problems for approval. If
Y
Y problems out of those were approved, find whether Munchy is an expert or not.*/
#include <stdio.h>

#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X , Y;

        scanf("%d %d", &X, &Y);
        if (Y >= (X * 0.5))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
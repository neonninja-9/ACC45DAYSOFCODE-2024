#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n , a , b;
        scanf("%d %d %d", &n , &a , &b);
        int i = n, count = 0;
        while(i != 1 ){
            i = i - i / 2;
            count++;
        }
        printf("%d", (a * count + b * (count - 1)));
    }

    return 0;
}
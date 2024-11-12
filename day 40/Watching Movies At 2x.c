#include <stdio.h>

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    int total_time = (y / 2) + (x - y);
    printf("%d\n", total_time);

    return 0;
}
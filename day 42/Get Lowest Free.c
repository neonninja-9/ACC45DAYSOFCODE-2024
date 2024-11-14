#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int *prices[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", prices);
        }
        // finding the minimum price
        int j = 0, min;
        while (j < 3)
        {
            min = prices[0];
            if (prices[j] < prices[j + 1])
            {
                min = prices[j];
            }
            j++;
        }
        int total_price = (prices[0] + prices[1] + prices[2]) - min;
        printf("%d\n", total_price);
    }

    return 0;
}
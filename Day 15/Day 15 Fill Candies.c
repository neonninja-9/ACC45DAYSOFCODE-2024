#include <stdio.h>
int mininumbags(int candies, int pockets, int pocket_capacity);
int mininumbags(int candies, int pockets, int pocket_capacity)
{
    int bags = 0;
    int candies_left = candies;
    int pockets_used = 0;
    while (candies_left > 0)
    {
        if (pockets_used >= pockets)
        {
            bags++;
            pockets_used = 0;
        }
        int candies_in_pocket = (pocket_capacity < candies_left) ? pocket_capacity : candies_left;
        candies_left -= candies_in_pocket;
        pockets_used++;
    }

    return bags;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int candies, pockets, pocket_capacity;
        scanf("%d %d %d", &candies, &pockets, &pocket_capacity);
        printf("%d", mininumbags(candies, pockets, pocket_capacity));
    }

    return 0;
}
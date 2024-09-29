/*Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is
X rupees. Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.*/
#include <stdio.h>

int main()
{
    int no_of_people;
    int subscription_price;
    int subscription_needed;
    int cost;

    printf("enter the total number of people:");
    scanf("%d", &no_of_people);
    printf("\nenter the price of subscription:");
    scanf("%d", &subscription_price);
    if (no_of_people % 6 == 0)
    {
        subscription_needed = no_of_people / 6;
    }
    else if (no_of_people % 6 < 6)
    {
        subscription_needed = (no_of_people / 6) + 1;
    }
    printf("you need to buy %d subscription, And the total cost will be :%d", subscription_needed, subscription_price * subscription_needed);

    return 0;
}
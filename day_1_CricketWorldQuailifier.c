/*Cricket World Cup Qualifier
The cricket World Cup has started in Chefland. There are many teams participating in the group stage matches. Any team that scores
12
12 or more points in the group stage matches qualifies for the next stage.

You know the score that a particular team has scored in the group stage matches. Determine if the team has qualified for the next stage or not.*/

#include <stdio.h>

int main()
{
    printf("check your team selected or not for The World Cup\n");
    int score;
    printf("Enter the score of your team: ");
    scanf("%d", &score);
    printf("You entered: %d\n", score);
    if (score >= 12)
    {
        printf("You have qualified for the next stage.\n");
    }
    else
    {
        printf("You have not qualified for the next stage.\n");
    }

    return 0;
}
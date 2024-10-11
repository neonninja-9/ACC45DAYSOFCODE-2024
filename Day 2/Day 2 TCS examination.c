/*
**TCS Examination**

Two friends, Dragon and Sloth, are writing a computer science examination series.
There are three subjects in this series: DSA, TOC, and DM. Each subject carries 100 marks.

You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank.

**The rank is decided as follows:**

- The person with a bigger total score gets a better rank.
- If the total scores are tied, the person who scored higher in DSA gets a better rank.
- If the total score and the DSA score are tied, the person who scored higher in TOC gets a better rank.
- If everything is tied, they get the same rank.

---

*/
#include <stdio.h>

typedef struct S_DATA
{
    int DSA;
    int TOC;
    int DM;
} marks;

int main()
{
    marks Dragon, Sloth;

    printf("Enter marks for Dragon (in format of DSA / TOC / DM): ");
    scanf("%d %d %d", &Dragon.DSA, &Dragon.TOC, &Dragon.DM);

    printf("Enter marks for Sloth (in format of DSA / TOC / DM): ");
    scanf("%d %d %d", &Sloth.DSA, &Sloth.TOC, &Sloth.DM);

    int score_dragon = Dragon.DSA + Dragon.TOC + Dragon.DM;
    int score_sloth = Sloth.DSA + Sloth.TOC + Sloth.DM;

    printf("Total score of Dragon is %d\n", score_dragon);
    printf("Total score of Sloth is %d\n", score_sloth);

    if (score_dragon > score_sloth)
    {
        printf("Dragon has better rank\n");
    }
    else if (score_dragon < score_sloth)
    {
        printf("Sloth has better rank\n");
    }
    else
    {
        if (Dragon.DSA > Sloth.DSA)
        {
            printf("Dragon has better rank\n");
        }
        else if (Dragon.DSA < Sloth.DSA)
        {
            printf("Sloth has better rank\n");
        }
        else
        {
            if (Dragon.TOC > Sloth.TOC)
            {
                printf("Dragon has better rank\n");
            }
            else if (Dragon.TOC < Sloth.TOC)
            {
                printf("Sloth has better rank\n");
            }
            else
            {
                if (Dragon.DM > Sloth.DM)
                {
                    printf("Dragon has better rank\n");
                }
                else if (Dragon.DM < Sloth.DM)
                {
                    printf("Sloth has better rank\n");
                }
                else
                {
                    printf("Both have same rank\n");
                }
            }
        }
    }

    return 0;
}
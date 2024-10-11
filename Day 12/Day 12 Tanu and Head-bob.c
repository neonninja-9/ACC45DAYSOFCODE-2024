/*Tanu has got interested in signs and gestures that we use for communication. One such gesture is the head-bob.
When we want to signal "Yes" to someone, we move the head up-and-down. For "No", the head is moved left-and-right, rotating about the vertical axis.
There is a peculiar way of gesturing "Yes", commonly seen in India, by moving head sideways (rotating about the forward-back axis). This is called the Indian head-bob.

Tanu observed many people on the railways station, and made a list of gestures that they made. Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I". (Assume no foreigner uses the Indian "Yes" gesture and vice-versa). Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.*/
#include <stdio.h>

#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", & t);
    while (t--)
    {
        int n, Y = 0, N = 0, I = 0;
        scanf("%d", & n);
        char * gasture = (char * ) malloc(n * sizeof(char));
        for (int i = 0; i < n; i++)
        {
            scanf(" %c", & gasture[i]);
            if (gasture[i] == 'Y')
            {
                Y += 1;
            }
            else if (gasture[i] == 'N')
            {
                N += 1;
            }
            else if (gasture[i] == 'I')
            {
                I += 1;
            }

        }
        if (I > 0) {
            printf("INDIAN\n");
        } else if (Y > 0 ) {
            printf("NOT INDIAN\n");
        } else if (I == 0 && Y == 0 && N > 0) {
            printf("NOT SURE\n");
        }


    }
    return 0;
}
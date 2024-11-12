#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int problems;
        int START38 = 0;
        int LTIME108 = 0;
        scanf("%d", &problems);
        char contest_name[20][20]; // Corrected to store strings

        for (int i = 0; i < problems; i++)
        {
            scanf("%s", contest_name[i]); // Use %s to read strings
        }

        for (int i = 0; i < problems; i++)
        {
            if (strcmp(contest_name[i], "START38") == 0) // Check for "START38"
            {
                START38++;
            }
            if (strcmp(contest_name[i], "LTIME108") == 0) // Check for "LTIME108"
            {
                LTIME108++;
            }
        }

        printf("%d %d\n", START38, LTIME108); // Print the counts
    }

    return 0;
}
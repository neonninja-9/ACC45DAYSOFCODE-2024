#include <stdio.h>

int main()
{
    int rounds;
    scanf("%d", &rounds);

    int player1_total = 0, player2_total = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < rounds; i++)
    {
        int player1_score, player2_score;
        scanf("%d %d", &player1_score, &player2_score);

        // Update cumulative scores
        player1_total += player1_score;
        player2_total += player2_score;

        // Calculate lead
        int lead = player1_total - player2_total;
        int current_lead = lead > 0 ? lead : -lead; // Absolute value of lead
        int current_winner = lead > 0 ? 1 : 2;

        // Update max lead and winner if current lead is greater
        if (current_lead > maxLead)
        {
            maxLead = current_lead;
            winner = current_winner;
        }
    }

    // Print the winner and the maximum lead
    printf("%d %d\n", winner, maxLead);

    return 0;
}
/*

---

**Binary Battles**

*N* teams have come to participate in a competitive coding event called “Binary Battles.” It is a single-elimination tournament consisting of several rounds.

**Note:** It is known that *N* is a power of 2.

In one round, each team will be paired up with and compete against one of the other teams. If there are *X* teams before the start of a round, \(\frac{X}{2}\) matches are held simultaneously during the round between \(\frac{X}{2}\) pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner.

The organizers want to find the total time the event will take to complete. It is given that each round spans *A* minutes, and that there is a break of *B* minutes between every two rounds (no break after the last round).

For example, consider a case when *N* = 4, *A* = 10, and *B* = 5. The first round will consist of two matches and will take 10 minutes to complete. Two teams move on to round 2, and the other two get eliminated. Then there is a break of 5 minutes. The two remaining teams compete in round 2, which lasts 10 more minutes. The team that wins is declared the overall winner. Thus, the total time taken is 10 + 5 + 10 = 25 minutes.

---

*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, rounds = 0;
        scanf("%d %d %d", &n, &a, &b);

        for (int i = n; !(i == 1); i /= 2)
        {
            rounds++;
        }
        int time_in_rounds = rounds * a;

        int time_in_breaks = (rounds - 1) * b;
        int total_time = time_in_rounds + time_in_breaks;
        printf("%d\n", total_time);
    }
    return 0;
}
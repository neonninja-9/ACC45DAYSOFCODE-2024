/*
Add 1 or 2 Game

Alice and Bob play a game.
There is an integer X, which is initially 0. On their turn, Alice or Bob can choose to increment X by either 1 or 2.
The game ends as soon as X ≥ N holds. When the game ends, Bob wins the game if X = N, otherwise Alice wins the game.

Alice goes first, and the players alternate turns.
If both players play optimally, predict the winner.

### Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- The first and only line of each test case contains a single integer N — the limit for the game.

### Output Format
For each test case, output on a new line the name of the winner: the string "ALICE" if Alice wins the game, and "BOB" if Bob wins the game (without the quotes).

Each character of the output may be printed in either uppercase or lowercase, i.e., the strings Bob, BOB, bOb, and bOB will all be treated as equivalent.



### Solution Approach:

In this problem, Alice wins if she can avoid landing on X = N (Bob's winning condition).

We need to simulate the game while both players play optimally. The game alternates between Alice and Bob. For small values of N (since \(1 < N < 10\)), we can solve this problem by observation:

- If N = 1, Alice can only increment by 1 on her first move and reach X = 1. Since the game ends at X = N, Bob wins.
- If N = 2, Alice can take X = 2 on her first move and win.
- If N = 3, no matter what Alice does, Bob can reach X = 3. Hence, Bob wins.
- If N = 4, Alice can win by incrementing in such a way that Bob is forced to land on X = 3.

We can continue this pattern for larger N.

### Solution Code:
*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--)
    {
        int n;
        scanf("%d", &n); // Read the value of N for each test case

        // Determine the winner based on the value of N
        if (n == n+1)
        {
            printf("ALICE\n"); 
             // Bob wins when N is a multiple of 3
        }
        else if ()
        {
           printf("BOB\n");// Alice wins otherwise
        }
    }

    return 0;
}
/*
```

### Explanation:
- The game alternates between Alice and Bob.
- If N is divisible by 3, Bob can win by forcing Alice into a losing position.
- If N is not divisible by 3, Alice can win by making moves that ensure Bob lands on N = 3, a losing position for him.*/
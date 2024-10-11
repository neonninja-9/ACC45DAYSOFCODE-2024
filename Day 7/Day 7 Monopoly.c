#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int P, Q, R, S;
        // Read the profits of the companies
        scanf("%d %d %d %d", &P, &Q, &R, &S);

        // Calculate the total profit of the other companies
        // Check if there is a monopoly for any company
        if (P > (Q + R + S) ||
            Q > (P + R + S) ||
            R > (P + Q + S) ||
            S > (P + Q + R)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

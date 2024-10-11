#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Input X (hours Monday-Thursday) and Y (hours Friday)
        
        // Calculate total working hours in the week
        int total_hours = 4 * X + Y;
        
        // Output the result for the current test case
        printf("%d\n", total_hours);
    }

    return 0;
}
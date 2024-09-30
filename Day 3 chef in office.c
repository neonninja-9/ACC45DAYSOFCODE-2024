#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Input number of test cases

    while (1) {
        int X, Y;
        scanf("%d %d", &X, &Y); 
        int total_hours = 4 * X + Y;
        printf("%d\n", total_hours);
    }

    return 0;
}

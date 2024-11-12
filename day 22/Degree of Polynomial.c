// Finding the degree of a polynomial
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, degree = -1;
        scanf("%d", &n);
        int coefficients[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &coefficients[i]);
        }
        
        // Find the highest non-zero coefficient
        for (int i = n - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i;
                break;
            }
        }

        printf("%d\n", degree);
    }

    return 0;
}

/*Maximize the Tastiness

Chef is making a dish that consists of exactly two ingredients. He has four ingredients A, B, C, and D with tastiness a, b, c, and d respectively. He can use either A or B as the first ingredient and either C or D as the second ingredient.

The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int maximum_tastiness = 0;
        if (a > b) {
            maximum_tastiness += a;
        } else {
            maximum_tastiness += b;
        }
        if (c > d) {
            maximum_tastiness += c;
        } else {
            maximum_tastiness += d;
        }
        printf("%d\n", maximum_tastiness);

    }
    return 0;
}


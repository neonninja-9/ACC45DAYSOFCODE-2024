#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", & a, & b, & c, & d);
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


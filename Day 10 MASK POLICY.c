#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n, a, not_a;
        scanf("%d %d", & n, & a);
        not_a = n - a;
        if (a < not_a) {
            printf("%d\n", a);
        } else {
            printf("%d\n", not_a);
        }

    }
    return 0;
}

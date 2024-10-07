#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int w, x, y, z;
        scanf("%d %d %d %d", &w, &x, &y, &z);
        if (x == w || y == w || z == w || (x + y) == w || (y + z) == w || (x + z) == w || (x + y + z) == w) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

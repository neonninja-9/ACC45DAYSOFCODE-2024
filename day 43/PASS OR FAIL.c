#include <stdio.h>

int main() {
        int t;
        scanf("%d", & t);
        while (t--)
        {
            int n, x, y, i;
            scanf("%d %d %d", & n, & x, & y );
                i = n - x; 
            int marks = (3 * x) - i;
            if (marks >= y) 
            {
                    printf("PASS\n");
            } else
            {
                    printf("FAIL\n");
            }
            
            

        }
        return 0;
}

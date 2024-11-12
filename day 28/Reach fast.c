#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, , c, k;
        scanf("%d %d %d", &a, &b, &k);
        
        if ( a<b){
            c = b - a;
        }
        else{
            c = a - b;
        }
        //result
        if (c % k == 0 ){
            printf("%d", c / k);
        }else{
            printf("%d", c / k + 1);

        }
    }

    return 0;
}
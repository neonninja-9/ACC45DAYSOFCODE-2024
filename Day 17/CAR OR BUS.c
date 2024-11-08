/*Car or Bike
Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes 

X minutes.
Travel with his CAR which takes 

Y minutes.
Which of the two options is faster or do they both take same time?

*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        if (x < y) {
            printf("BIKE\n");

        } else if (x> y) {
            printf("CAR\n");
        } else if (x = y) {
            printf("SAME\n");

        }



    }
    return 0;
}
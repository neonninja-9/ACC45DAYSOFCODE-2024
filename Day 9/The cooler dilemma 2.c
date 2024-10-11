/*The Cooler Dilemma 2
The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

Rent a cooler at the cost of 
X
X coins per month.
Purchase a cooler for 
Y
Y coins.
Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.*/


#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);


        if (x >= y) {

            printf("0\n");
        } else {

            printf("%d\n", (y - 1) / x);
        }
    }

    return 0;
}

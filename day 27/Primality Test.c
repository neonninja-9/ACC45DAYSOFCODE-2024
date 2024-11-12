#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) return false;         // Numbers less than or equal to 1 are not prime
    if (n <= 3) return true;           // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Multiples of 2 and 3 are not prime

    for (int i = 5; i <= sqrt(n); i += 6) { // Only check up to √n
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d" , &t);
    while(t--){
    int number;
    scanf("%d", &number);

    if (isPrime(number))
        printf("yes\n");
    else
        printf("no\n");
    }

    return 0;
}

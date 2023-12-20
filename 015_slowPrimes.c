#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_prime(int n) {
    int i;

    if(n < 2) return 0;
    if (n % 2 == 0) {
        /* special case for the only even prime */
        n == 2;
    }
    /* else */
    for(i = 3; i*i <= n; i+=2) {
        if(n % i == 0) return 0;
    }

    printf("%d\n", n);
    return 1;
}

int countPrimes(int n) {
    int i;
    int count;

    count = 0;
    for(i = 0; i < n; i++) {
        if(check_prime(i)) count++;
    }

    return count;
}

int main (int argc, char **argv) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        return 1;
    }

    printf("\nPrime count: %d\n", countPrimes(atoi(argv[1])));

    return 0;
}
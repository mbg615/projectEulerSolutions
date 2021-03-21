#include <stdio.h>

int isPrime(int number);

int main(void) {
    int i;
    unsigned long long sum = 0;
    for (i = 0; i < 2000000; i++) {
        if (isPrime(i)) {
            sum += i;
            printf("%d\n", i);
        }
    }
    printf("%llu is the sum of all primes below 2 million", sum);
}

int isPrime(int number) {
    for(int i = 2; i <= number/2; i++) {
        if(number % i == 0) {
            return 0;
        }
    }
    return 1;
}

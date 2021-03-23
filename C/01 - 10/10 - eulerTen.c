#include <stdio.h>
#include <math.h>

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
    if (number > 2 && number % 2 == 0) return 0;
    for (int i = 3; i < sqrt(number) + 1; i++) {
        if (i % 2 == 0)
        continue;
        if (number % i == 0) return 0;
    }
    return 1;
}

#include <stdio.h>

int main(void) {
    long long i, n = 600851475143;
    for (i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            n /= i;
        }
        if (n == 1) break;
    }
    printf("The largest prime factor of 600851475143 is %lld", i);
}

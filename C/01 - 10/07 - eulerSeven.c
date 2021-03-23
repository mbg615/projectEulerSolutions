#include <stdio.h>
#include <math.h>

int isPrime(int number);
int main(void) {
    int counter = 0, numberToTest = 1, isPrime;
    while(counter < 10001) {
        numberToTest++;
        isPrime = testPrime(numberToTest);
        if(isPrime == 1) {
            counter++;
        }
    }
    printf("%d is the 10001st prime number\n", numberToTest);
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

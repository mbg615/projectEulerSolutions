#include <stdio.h>

int testPrime(int number);
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
int testPrime(int number) {
    for(int i = 2; i <= number/2; i++) {
        if(number % i == 0) q{
            return 0;
        }
    }
    return 1;
}

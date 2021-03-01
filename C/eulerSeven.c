#include <stdio.h>
#include <stdlib.h>

int testPrime(int number);
int main(void) {
    int counter = 6, numberToTest = 14, isPrime;
    while(counter <= 10001) {
        isPrime = testPrime(numberToTest);
        if(isPrime == 1) {
            counter++;
            numberToTest++;
        }
        if(isPrime == 0) {
            numberToTest++;
        }
        if(counter == 10001) {
            numberToTest--;
            printf("%d is the 10001st prime number\n", numberToTest);
            exit(1);
        }
    }
}
int testPrime(int number) {
    for(int i = 2; i <= number/2; i++) {
        if(number % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Find the sum of all the primes below two million.
#include <iostream>
#include <cmath>
int main() {
    bool isPrime(int number);
    long sumOfPrimes = 0;
    for(int i = 1; i < 2000000; i++) {
        if(isPrime(i)) {
            sumOfPrimes += i;
        }
    }
    std::cout << sumOfPrimes << " is the sum of all the primes below two million\n";
    return 0;
}
bool isPrime(int number) {
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i = 3; i <= sqrt(number); i+=2) {
        if(number % i == 0) return false;
    }
    return true;
}
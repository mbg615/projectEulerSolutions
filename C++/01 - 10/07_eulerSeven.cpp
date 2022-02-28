// What is the 10 001st prime number?
#include <iostream>
#include <cmath>
int main() {
    bool isPrime(int number);
    int number = 0, primeCount = 0;
    while(primeCount != 10001) {
        number++;
        if(isPrime(number)) {
            primeCount++;
        }
    }
    std::cout << number << " is the 10001st prime number.\n";
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
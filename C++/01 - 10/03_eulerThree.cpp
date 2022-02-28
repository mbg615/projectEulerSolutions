// What is the largest prime factor of the number 600851475143?
#include <iostream>
#include <cmath>
int main() {
    long number = 600851475143, i;
    for(i = 3; i <= number; i += 2) {
        while(number % i == 0) {
            number /= i;
        }
        if(number == 1) {
            break;
        }
    }
    std::cout << i << " is the largest prime factor of 600851475143\n";
    return 0;
}
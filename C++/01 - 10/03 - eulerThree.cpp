#include <iostream>

int main() {
    long number = 600851475143, i;
    for (i = 3; i <= number; i += 2) {
        while (number % i == 0) {
            number /= i;
        }
        if (number == 1) break;
    }
    std::cout << "The largest prime factor of 600851475143 is " << i << "\n";
}

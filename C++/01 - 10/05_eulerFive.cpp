// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
int main() {
    bool allDivisible(int number);
    bool evaluating = true;
    int number = 0;
    while(evaluating) {
        number++;
        if(allDivisible(number)) {
            evaluating = false;
        }
    }
    std::cout << number << " is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20.\n";
    return 0;
}
bool allDivisible(int number) {
    for(int i = 1; i <= 20; i++) {
        if(number % i != 0) {
            return false;
        }
    }
    return true;
}
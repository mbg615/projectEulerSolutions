// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
int main() {
    int sumOfSquares = 0, sum = 0;
    for(int i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        sum += i;
    }
    sum *= sum;
    std::cout << sum - sumOfSquares << " is difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.\n";
    return 0;
}
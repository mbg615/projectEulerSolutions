// Find the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed four million.
#include <iostream>
int main() {
    int termOne = 0, termTwo = 1, nextTerm, sum = 0;
    while (nextTerm < 4000000) {
        nextTerm = termOne + termTwo;
        termOne = termTwo;
        termTwo = nextTerm;
        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }
    }
    std::cout << sum << " is the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed four million.\n";
    return 0;
}
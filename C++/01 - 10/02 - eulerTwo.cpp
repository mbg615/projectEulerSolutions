#include <iostream>

int main() {
    int nextTerm = 0, termOne = 0, termTwo = 1;
    int sum = 0;
    while (nextTerm < 4000000) {
        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }
        nextTerm = termOne + termTwo;
        termOne = termTwo;
        termTwo = nextTerm;
    }
    std::cout << sum << "\n";
}

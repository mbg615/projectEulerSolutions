#include <stdio.h>

int main(void) {
    int i, termOne = 0, termTwo = 1, nextTerm = 0, evenSum;
    while (nextTerm <= 4000000) {
        termOne = termTwo;
        termTwo = nextTerm;
        nextTerm = termOne + termTwo;
        if (nextTerm % 2 == 0) {
            evenSum += nextTerm;
        }
    }
    printf("The sum of all even numbers in a Fibonacci sequence less than 4 million is %d\n", evenSum);
}

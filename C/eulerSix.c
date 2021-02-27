#include <stdio.h>

int squareNum(int number);
int main(void) {
    int i, iSquare, sum = 0, sumSquare = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    sum *= sum;
    for (i = 1; i <= 100; i++) {
        iSquare = squareNum(i);
        sumSquare += iSquare;
    }
    sum -= sumSquare;
    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %d", sum);
}
int squareNum(int number) {
    return number * number;
}

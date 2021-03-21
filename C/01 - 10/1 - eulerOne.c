#include <stdio.h>

int main(void) {
    int i, sumThree = 0, sumFive = 0, sumBoth = 0, sum;
    for (i = 1; i <= 999; i++) {
        if (i % 3 == 0) {
            sumThree += i;
        }
        if (i % 5 == 0) {
            sumFive += i;
        }
        if (i % 15 == 0) {
            sumBoth += i;
        }
        if (i == 999) {
            sum = sumThree + sumFive - sumBoth;
            printf("The sum of all the numbers less that 1000 that are multiples of 3 or 5 is %d\n", sum);
        }
    }
}

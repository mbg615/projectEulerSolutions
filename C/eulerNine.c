#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPerfectSquare(int number);

int main(void) {
    int i, j, iSquare, jSquare, sum, squareTest, sumTotal, prodTotal;
    for (i = 1; i < 1000; i++) {
        for (j = 1; j < 1000; j++) {
            iSquare = i * i;
            jSquare = j * j;
            sum = iSquare + jSquare;
            squareTest = isPerfectSquare(sum);
            if (squareTest) {
                sumTotal = i + j + sqrt(sum);
                if (sumTotal == 1000) {
                    prodTotal = i * j * sqrt(sum);
                    printf("The product of %d %d and %d is %d when %d and %d is A and B from the pythagorean theorm that has a hypotenuse of 1000\n", i, j, sumTotal, prodTotal, i, j);
                    exit(1);
                }
            }
        }
    }
}

int isPerfectSquare(int number) {
    int iVar;
    float fVar;
    fVar = sqrt((double)number);
    iVar = fVar;
    if (iVar == fVar) return 1;
    else return 0;
}

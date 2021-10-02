#include <stdio.h>

int main() {
    extern int matrix[20][20];
    int maxProd = 1, prodOne, prodTwo, prodThree, prodFour;
    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
            prodOne = matrix[i][j] * matrix[i + 1][j] * matrix[i + 2][j] * matrix[i + 3][j];
            if(prodOne > maxProd) {
                maxProd = prodOne;
            }
            
            prodTwo = matrix[i][j] * matrix[i][j + 1] * matrix[i][j + 2] * matrix[i][j + 3];
            if(prodTwo > maxProd) {
                maxProd = prodTwo;
            }
            
            prodThree = matrix[i][j] * matrix[i + 1][j + 1] * matrix[i + 2][j + 2] * matrix[i + 3][j + 3];
            if(prodThree > maxProd) {
                maxProd = prodThree;
            }
            
            prodFour = matrix[19 - i][j] * matrix[18 - i][j + 1] * matrix[17 - i][j + 2] * matrix[16 - i][j + 3];
            if(prodFour > maxProd) {
                maxProd = prodFour;
            }
        }
    }
    printf("The maximum product of any four adjicent nubers in the matrix is %d\n", maxProd);
}

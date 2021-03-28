#include <stdio.h>

int main() {
    extern int grid[20][20];
    int maxProd = 1, prodOne, prodTwo, prodThree, prodFour;
    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
            prodOne = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
            if(prodOne > maxProd) {
                maxProd = prodOne;
            }
            
            prodTwo = grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3];
            if(prodTwo > maxProd) {
                maxProd = prodTwo;
            }
            
            prodThree = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3];
            if(prodThree > maxProd) {
                maxProd = prodThree;
            }
            
            prodFour = grid[19 - i][j] * grid[18 - i][j + 1] * grid[17 - i][j + 2] * grid[16 - i][j + 3];
            if(prodFour > maxProd) {
                maxProd = prodFour;
            }
        }
    }
    printf("The maximum product of any four adjicent nubers in the grid is %d\n", maxProd);
}

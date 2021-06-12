#include <stdio.h>

int main(void) {
    int num = 1, exit = 0;
    while (exit == 0) {
        if (!(num % 11) && !(num % 12) && !(num % 13) && !(num % 14) && !(num % 15) && !(num % 16) && !(num % 17) && !(num % 18) && !(num % 19) && !(num % 20)) {
            printf("%d is the smallest number that is divisible by 1 through 20", num);
            exit = 1;
        }
        num++;
    }
}

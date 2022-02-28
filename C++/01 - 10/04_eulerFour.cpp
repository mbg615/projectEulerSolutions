// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
int main() {
    int largestPalindrome = 0, product;
    int reverse(int number);
    for(int i = 100; i <= 999; i++) {
        for(int j = 100; j <= 999; j++) {
            product = i * j;
            if(product == reverse(product)) {
                if(product > largestPalindrome) {
                    largestPalindrome = product;
                }
            }
        }
    }
    std::cout << largestPalindrome << " is the largest palindrome made from the product of two 3-digit numbers.\n";
    return 0;
}
int reverse(int number) {
    int remainder, reversed = 0;
    while(number != 0) {
        remainder = number % 10;
        if(remainder != 0) {
            number -= remainder;
            number /= 10;
        }
        else {
            number /= 10;
        }
        reversed *= 10;
        reversed += remainder;
    }
    return reversed;
}
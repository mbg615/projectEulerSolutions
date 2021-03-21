#include <stdio.h>
#include <math.h>

int numOfDigits(int number);
int digit(int number);
int digitRemover(int number, int subtractor);
int comparison(int number, int comparator);

int main(void) {
    int i, j, k, product, digitsInNum, count = 0, palindromeFive, palindromeSix, largest, compare, palindrome;
    for (i = 999; i >= 100; i--) {
        for (j = 999; j >= 100; j--) {
            product = i * j;
            digitsInNum = numOfDigits(product);
            int digitOne, digitTwo, digitThree, digitFour, digitFive, digitSix, newProduct, previousProduct = 0, fiveDigitPalindrome = 0, sixDigitPalindrome = 0, fiveDigitStore = 0, sixDigitStore = 0, compareSixDigit, compareFiveDigit;
            switch (digitsInNum) {
                case 5:
                    // Digit five finder and prep for finding digit four
                    digitFive = digit(product);
                    newProduct = digitRemover(product, digitFive);
                    
                    // Digit four finder and prep for finding digit three
                    digitFour = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitFour);
                    
                    // Digit three Finder and prep for finding digit two
                    digitThree = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitThree);
                    
                    // Digit two finder and prep for finding digit one
                    digitTwo = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitTwo);
                    
                    // Assigning digit one to the last remaining number
                    digitOne = newProduct;
                    
                    // Test if the number is a palindrome
                    if (digitFive == digitOne) {
                        if (digitFour == digitTwo) {
                            fiveDigitPalindrome = product;
                            compareFiveDigit = comparison(fiveDigitPalindrome, fiveDigitStore);
                        }
                    }
                    
                    // End the switch
                    break;
                case 6:
                    // Digit six finder and prep for finding digit five
                    digitSix = digit(product);
                    newProduct = digitRemover(product, digitSix);
                    
                    // Digit five finder and prep for finding digit four
                    digitFive = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitFive);
                    
                    // Digit four finder and prep for finding digit three
                    digitFour = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitFour);
                    
                    // Digit three finder and prep for finding digit two
                    digitThree = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitThree);
                    
                    // Digit two finder and prep for finding digit one
                    digitTwo = digit(newProduct);
                    newProduct = digitRemover(newProduct, digitTwo);
                    
                    // Assigning digit one to the last remaining number
                    digitOne = newProduct;
                    
                    // Test if the number is a palindrome
                    if (digitSix == digitOne) {
                        if (digitFive == digitTwo) {
                            if (digitFour == digitThree) {
                                sixDigitPalindrome = product;
                                compareSixDigit = comparison(sixDigitPalindrome, sixDigitStore);
                            }
                        }
                    }
                    // End the switch
                    break;
            }
            if (sixDigitPalindrome >= fiveDigitPalindrome) {
                palindrome = sixDigitPalindrome;
            }
            if (fiveDigitPalindrome >= sixDigitPalindrome) {
                palindrome = fiveDigitPalindrome;
            }
        }
    }
    printf("test: %d\n", palindrome);
}
int numOfDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}
int digit(int number) {
    number %= 10;
    return number;
}
int digitRemover(int number, int subtractor) {
    number -= subtractor;
    number /= 10;
    return number;
}
int comparison(int number, int comparator) {
    if (number <= comparator) {
        number = comparator;
        return number;
    }
    return number;
}

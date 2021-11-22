#include <iostream>
#include <string>

int main() {
    std::string numberToWord(int number);
    std::string allNumbersAsWords;

    for(int i = 1; i <= 1000; i++) {
        allNumbersAsWords += numberToWord(i);
        std::cout << numberToWord(i) << "\n";
    }

    std::cout << allNumbersAsWords.length() << "\n";
    return 0;

}

std::string numberToWord(int number) {
    int ones = 0, numberLength = 0;
    std::string numberAsWord;
    std::string singleDigits[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string elevenToNineteen[10] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string tens[11] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"};

    if(number < 10) { // 1 -> 10
        numberAsWord = singleDigits[number];
    }
    if(number <= 100 && number > 9) { // 10 -> 99
        if(number % 10 == 0) { // All n0's
            numberAsWord = tens[(number / 10)];
        } 
        if(number % 100 > 10 && number % 100 < 20) { // All teens
                numberAsWord = elevenToNineteen[number % 10];
        } else { // All nn's
            numberAsWord = tens[((number - (number % 10)) / 10)] + singleDigits[number % 10];
        }
    }
    if(number <= 1000 && number > 99) { // 100 -> 999
        if(number % 100 == 0) { // All n00's
            numberAsWord = singleDigits[number / 100] + tens[10];
        } else {
            if(number % 10 == 0) { // All nn0's
                numberAsWord = singleDigits[(number - (number % 100)) / 100] + tens[10];
            }
            if(number % 100 > 10 && number % 100 < 20) { // All nteens
                numberAsWord = singleDigits[(number - (number % 100)) / 100] + tens[10] + "and" + elevenToNineteen[number % 10];
            } else { // All others
                numberAsWord = singleDigits[(number - (number % 100)) / 100] + tens[10] + "and" + tens[((number % 100) - (number % 10)) / 10] + singleDigits[number % 10];
            }
        }
    }
    if(number == 1000) { // 1000
        numberAsWord = "onethousand";
    }

    return numberAsWord;
}
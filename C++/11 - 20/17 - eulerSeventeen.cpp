#include <iostream>
#include <map>
#include <string>

int main() {

}

int numberToWord(int number) {
    std::string singleDigits[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string elevenToNineteen[10] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string tens[10] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if(number < 10) {
        // Do stuff
    }
    if(number < 100 && number > 9) {
        // Do stuff
    }
    if(number < 1000 && number > 99) {
        // Do stuff
    }
    if(number < 10000 && number > 999) {
        // Do stuff
    }
}
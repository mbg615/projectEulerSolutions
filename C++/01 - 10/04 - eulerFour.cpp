#include <iostream>
#include <list>

int main() {
    int isPalindrome(int num);
    std::list<int> palindromes;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int revNumber = 0;
            revNumber = isPalindrome(i*j);
            if (revNumber == i*j) {
                palindromes.push_back(i*j);
            }
        }
    }
    palindromes.sort();
    std::cout << palindromes.back() << "is the largest palindrome made from the products of 2 three digit numbers";
    return 0;
}

int isPalindrome(int number) {
    int digit, revNumber = 0;
    while (number != 0) {
        digit = number % 10;
        revNumber = revNumber*10 + digit;
        number /= 10;
    }
    return revNumber;
}

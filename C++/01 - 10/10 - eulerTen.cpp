#include <iostream>
#include <cmath>
#include <list>

int main() {
    int isPrime(int number);
    std::list<int> primeList;

    for (int i = 2; i < 2000000; i++) {
        if (isPrime(i)){primeList.push_back(i);}
    }
    
    unsigned long long listProduct = 1;
    for (std::list<int>::iterator it = primeList.begin(); it != primeList.end(); it++) {
        std::cout << *it << std::endl;
        listProduct += *it;
    }
    
    std::cout << "The sum of all prime numbers under 2 million is: " << listProduct << std::endl;
}

int isPrime(int number) {
    if (number > 2 && number % 2 == 0) return 0;
    for (int i = 3; i < sqrt(number) + 1; i++) {
        if (i % 2 == 0)
        continue;
        if (number % i == 0) return 0;
    }
    return 1;
}

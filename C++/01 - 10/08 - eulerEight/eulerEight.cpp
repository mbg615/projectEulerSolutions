#include <iostream>
#include <string>
#include <list>

int main() {
    long long largestProductOfNum(std::list<long long> list);
    static const int strLength = 13;
	extern std::string dataStr;
    
    int start = 0;
    std::list<long long> validNumbers;

	while (start <= dataStr.length() - strLength) {
		std::string testPart = dataStr.substr(start, strLength);
        
        size_t found = testPart.find("0");
        if (found == std::string::npos) {
            long long testInt = std::stoull(testPart);
            validNumbers.push_back(testInt);
        }
        
        start++;
	}
    
    long long solution = largestProductOfNum(validNumbers);
    std::cout << solution << " is the largest product of 13 adjacent numbers in the 1000 digit number" << std::endl;
    
    exit(0);
}

long long largestProductOfNum(std::list<long long> list) {
    std::list<long long> numProductNumbers;
    
    for (long long &i: list) {
        long long productOfList(std::list<int> &list);
        std::list<int> digitBreak(long long num);
        
        std::list<int> digitList;
        long long numProduct;
        
        digitList = digitBreak(i);
        numProduct = productOfList(digitList);
        numProductNumbers.push_back(numProduct);
    }
    numProductNumbers.sort();

    return numProductNumbers.back();
}

std::list<int> digitBreak(long long num) {
    std::list<int> digitList;
    int digit;
    while(num >= 1) {
        int digit = num % 10;
        digitList.push_back(digit);
        num /= 10;
    }
    return digitList;
}

long long productOfList(std::list<int> &list) {
    long long listProd = 1;
    for(int &i: list) {
        listProd *= i;
    }
    return listProd;
}

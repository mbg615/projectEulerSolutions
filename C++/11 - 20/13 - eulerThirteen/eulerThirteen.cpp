#include <iostream>
#include <cmath>
#include <string>

int main() {
  extern std::string numbers[];

  for(int i = 0; i <= 100; i++) {
    std::cout << numbers[i] << "\n";
  }
}

std::string stringAddition(std::string numOne, std::string numTwo) {
  int carry, digitOne, digitTwo, sum;
  std::string strPartOne, strPartTwo, sumString;
  if(numOne.length() != numTwo.length()) {
    int lengthDiffrence = numOne.length() - numTwo.length();
    if(lengthDiffrence < 0) {
      std::string extra = numTwo.substr(0,std::abs(lengthDiffrence));
    }
  }
  for(int i = 0; i <= numOne.length(); i++) {
    strPartOne = numOne.back();
    strPartTwo = numTwo.back();
    digitOne = std::stoi(strPartOne);
    digitTwo = std::stoi(strPartTwo);
    sum = digitOne + digitTwo;
    if(sum < 9) {
      carry = sum / 10;
    }
  }
}

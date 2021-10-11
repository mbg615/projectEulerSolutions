// This code is VERY slow and needs to be refactored

#include <iostream>
#include <cmath>

int main() {
  int divCounter = 0;
  int testNumber = 0;

  int divisors(int number);
  bool isTriangular(int number);

  bool checking = true;
  while (checking) {
    testNumber++;
    if (divisors(testNumber) > 500 && isTriangular(testNumber) == 1) {
      checking = false;
      std::cout << testNumber;
      std::exit(0);
    }
  }
  std::cout << testNumber;
}

int divisors(int number) {
  int divCounter = 0;
  for (int i = 1; i < number / 2; i++) {
    if (number % i == 0) {
      divCounter++;
    }
  }
  return divCounter;
}

bool isTriangular(int number) {
  bool isPerfectSquare(int number);
  if (isPerfectSquare(((8 * number) + 1)) == 1) return true;
  return false;
}

bool isPerfectSquare(int number) {
  int hex = number & 0xF;
  if (hex > 9) {
    return false;
  }
  if (hex != 2 && hex != 3 && hex != 5 && hex != 6 && hex != 7 && hex != 8) {
    return true;
  }
  return false;
}

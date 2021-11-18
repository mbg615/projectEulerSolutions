#include <iostream>
#include <cmath>
#include <string>

int main() {
  std::string powered = std::to_string(pow(2,1000));
  int digit = 0, sum = 0;

  // Remove 0's and .'s from the number
  powered.erase(std::remove(powered.begin(), powered.end(), '0'), powered.end());
  powered.erase(std::remove(powered.begin(), powered.end(), '.'), powered.end());

  for(int i = 0; i != powered.length(); i++) {
    digit = std::stoi(std::string(1,powered.at(i)));
    sum += digit;
  }

  std::cout << sum;
}

#include <iostream>

int computeCollatz(long number) {
  int count = 0;

  while(number != 1) {
    if(number % 2 == 0) {
      number /= 2;
    }
    else {
      number = 3*number + 1;
    }
    count++;
  }
  return count;
}

int main() {
  int maxLoops = 0, maxNum = 0;
  for(int i = 1; i < 1000000; i++) {
    if(computeCollatz(i) > maxLoops) {
      maxLoops = computeCollatz(i);
      maxNum = i;
    }
  }
std::cout << maxNum << std::endl;
}

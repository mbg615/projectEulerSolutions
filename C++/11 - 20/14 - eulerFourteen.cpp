#include <iostream>

int main() {
  int collatzNumber = 1, collatzSequenceLength, collatzSequenceLengthHighest;
  int collatzSequence(int seed);
  while(collatzNumber < 1000000) {
    // Do Collatz Conjecture
    collatzSequenceLength = collatzSequence(collatzNumber);
    if(collatzSequenceLength > collatzSequenceLengthHighest) {
      collatzSequenceLengthHighest = collatzSequenceLength;
    }
    std::cout << collatzNumber << " " << collatzSequenceLength << "\n";
    collatzNumber++;
  }
  std::cout << "The largest collatz number below 1 million is" << collatzNumber << "with a length of" << collatzSequenceLengthHighest << "\n";
}

int collatzSequence(int seed) {
  int collatzStep = 0;
  if(seed == 1) {
    collatzStep = 1;
  }
  while(seed != 1) {
    if(seed % 2 == 0) {
      seed /= 2;
    } else {
      seed = seed * 3 + 1;
    }
    collatzStep++;
    std::cout << " " << collatzStep;
  }
  return collatzStep;
}

#include <iostream>

int main() {
	long sumOne = 0, sumTwo = 0, diff = 0;
	for (int i = 0; i <= 100; i++) {
		sumOne += i;
		sumTwo += i*i;
	}
	sumOne *= sumOne;
	diff = sumOne - sumTwo;
	std::cout << diff << " is the difference between the sum of the first 100 natural numbers squared and the sum squared.";
	return 0;
}

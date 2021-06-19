#include <iostream>

using namespace std;

int main() {
	int isPrime(int number);
	bool running = true;
	int counter = 0, num = 2;
	while (running == true) {
		if (isPrime(num) == 1) {
			counter++;
		}
		if (counter == 10001) {
			running = false;
			cout << num << " is the 10001 prime number.\n";
		}
		num++;
	}
}

// Optimized prime checker from my C programs.
int isPrime(int number) {
    if (number > 2 && number % 2 == 0) return 0;
    for (int i = 3; i < sqrt(number) + 1; i++) {
        if (i % 2 == 0)
        continue;
        if (number % i == 0) return 0;
    }
    return 1;
}
 #include <iostream>

int main() {
    int dividend = 1;
    bool running = true;
    while (running == true) {
        if (!(dividend % 11) && !(dividend % 12) && !(dividend % 13) && !(dividend % 14) && !(dividend % 15) && !(dividend % 16) && !(dividend % 17) && !(dividend % 18) && !(dividend % 19) && !(dividend % 20)) {
                std::cout << dividend << " is the smallest number that is divisible by 1 through 20\n";
                return 0;
        }
        dividend++;
    }
}

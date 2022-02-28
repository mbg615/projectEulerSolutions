// There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
#include <iostream>
#include <cmath>
int main() {
    bool isPerfectSquare(int num);
    bool evaluating = true;
    int a, b, c;
    while(evaluating) {
        for(a = 1; a < 1000; a++) {
            for(b = 1; b < 1000; b++) {
                if(isPerfectSquare((a * a) + (b * b))) {
                    c = std::sqrt((a * a) + (b * b));
                    if(a + b + c == 1000) {
                        std::cout << a * b * c << " is the product abc for the Pythagorean triplet for which a + b + c = 1000\n";
                        return 0;
                    }
                }
            }
        }
    }
}
bool isPerfectSquare(int num) {
    double sr = sqrt(num); 
    return ((sr - floor(sr)) == 0);
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            int iSquard = i * i, jSquared = j * j;
            int sum = iSquard + jSquared;
            bool squareTest;
            bool isPerfectSquare(int number);
            squareTest = isPerfectSquare(sum);
            if (squareTest) {
                int sumTotal = i + j + sqrt(sum);
                if (sumTotal == 1000) {
                    cout << i * j * sqrt(sum) << " Done!" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

bool isPerfectSquare(int number) {
    int iVar;
    float fVar;
    fVar = sqrt((double)number);
    iVar = fVar;
    if (iVar == fVar) return true;
    else return false;
}

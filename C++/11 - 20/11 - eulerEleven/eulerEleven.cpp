#include <iostream>
#include <string>

int main() {
    extern std::string str_matrix[20][20];
    int matrix[20][20];

    // Convert matrix of strings to ints
    for (int column = 0; column <= 20; column++) {
        for (int row = 0; row <= 20; row++) {
           int value = stoi(str_matrix[column][row]);
            matrix[column][row] = value;
        }
    }

    /*
    // Check up and down
    for (int column = 0; column <= 20; column++) {
        for (int row = 0; row <= 20; row++) {
            matrix[column][0] * matrix[column + 1][0] * matrix[column + 2][0] * matrix[column + 3][0];
        }
    }
    */
}

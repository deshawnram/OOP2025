#include <iostream>
#include "function-1-4.cpp"
using namespace std;

int main() {
    int matrix[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int scale = 3;

    print_scaled(matrix, scale);
    return 0;
}

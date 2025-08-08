#include <iostream>
#include "function-1-3.cpp"
using namespace std;

int main() {
    int matrix[4][4] = {
        {1, 0, 3, 4},
        {0, 1, 0, 4},
        {3, 1, 0, 5},
        {3, 4, 5, 6}
    };

    count_digits(matrix);
    return 0;
}
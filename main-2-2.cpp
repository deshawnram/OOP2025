#include <iostream>
#include "function-2-2.cpp"
using namespace std;

int main() {
    int binary_digits[] = {1, 0, 1, 1};
    int number_of_digits = 4;

    cout << "Integer value: " << binary_to_int(binary_digits, number_of_digits) << endl;

    return 0;
}
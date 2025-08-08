#include <iostream>
#include <cmath>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    if (number_of_digits <= 0) return -1;

    int value = 0;
    for (int i = 0; i < number_of_digits; i++) {
        if (binary_digits[i] != 0 && binary_digits[i] != 1) return -1;
        value += binary_digits[i] * pow(2, number_of_digits - i - 1);
    }

    return value;
}
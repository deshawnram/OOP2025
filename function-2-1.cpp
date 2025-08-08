#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
    int number = stoi(decimal_number); // Convert string to integer
    string binary = "";

    while (number > 0) {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }

    cout << binary << endl;
}
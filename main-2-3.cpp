#include <iostream>
#include "function-2-3.cpp"
using namespace std;

int main() {
    int array[] = {1, 2, 3, 2, 1};
    int length = 5;

    cout << "Sum if palindrome: " << sum_if_palindrome(array, length) << endl;

    return 0;
}
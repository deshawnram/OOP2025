#include <iostream>
#include "function-2-4.cpp"
using namespace std;

int main() {
    int array[] = {3, 1, 4, 1, 5, 9};
    int length = 6;

    cout << "Sum of min and max: " << sum_min_max(array, length) << endl;

    return 0;
}
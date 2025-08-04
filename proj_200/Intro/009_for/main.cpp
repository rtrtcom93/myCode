#include <iostream>
using namespace std;

int main() {
    int sum1 = 0;
    int sum2 = 0;

    int one = 1;
    int two = 2;

    for (size_t i = 0; i < 5; i++) {
        sum1 += one; // sum1 = sum1 + one;
        sum2 += two; // sum2 = sum2 + two;
    }

    cout << "sum1 = " << sum1 << ", sum2 = " << sum2 << endl; // sum1 = 5, sum2 = 10
    return 0;
}
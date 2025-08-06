#include <iostream>
using namespace std;

int main() {
    int two = 2;
    int eight = 8;
    int sum1 = 2;
    int sum2 = 2;

    sum1 = sum1 + two;
    sum2 += eight; // 축약된 덧셈 연산자 사용

    cout << "sum1 = " << sum1 << endl; // sum1 = 4
    cout << "sum2 = " << sum2 << endl; // sum2 = 10

    sum1 = 2;
    sum2 = 8;
    sum1 *= two; // 축약된 곱셈 연산자 사용
    sum2 /= eight; // 축약된 나눗셈 연산자 사용

    cout << "sum1 = " << sum1 << endl; // sum1 = 4
    cout << "sum2 = " << sum2 << endl; // sum2 = 1

    return 0;
}
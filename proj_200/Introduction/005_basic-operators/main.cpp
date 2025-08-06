#include <iostream>
using namespace std;

int main() {
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    cout << "1 + 2 = " << one + two << endl; // 덧셈
    cout << "4 - 2 = " << three - four << endl; // 뺄셈
    cout << "2 * 3 = " << two * three << endl; // 곱셈
    cout << "4 / 2 = " << four / two << endl; // 나눗셈

    cout << "2 + 3 * 4 = " << two + three * four << endl; // 연산자 우선순위: 곱셈이 덧셈보다 먼저 수행됨
    cout << "1 + 4 / 2 = " << one + four / two << endl; // 나눗셈이 덧셈보다 먼저 수행됨

    return 0;
}
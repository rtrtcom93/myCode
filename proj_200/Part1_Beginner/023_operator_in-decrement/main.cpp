#include <iostream>
using namespace std;

int main() {
    /* ==in/decrement operator==
     증감 연산자는 unary operator(단항 연산자)로 x = x + 1;을 x++로 축약할 수 있음.
     증가는 ++ 감소는 --를 각각 사용.
     연산자의 위치에 따라 의미가 달라짐.
     
     x++ : x를 사용한 뒤 1 증가
     ++x : x를 1 증가한 뒤 사용
     x-- : x를 사용한 뒤 1 감소
     --x : x를 1 감소한 뒤 사용
    */

    int x = 1;
    cout << "x = " << x++ << endl; // x = 1이 출력된 후 1 증가 
    cout << "x = " << x++ << endl; // x = 2가 출력된 후 1 증가
    cout << "x = " << ++x << endl; // x = 3에서 1이 증가된 후 x = 4 출력
    cout << "x = " << x-- << endl; // x = 4가 출력된 후 1 감소
    cout << "x = " << x-- << endl; // x = 3이 출력된 후 1 감소
    cout << "x = " << --x << endl; // x = 2에서 1이 감소 된 후 x = 1 출력

    return 0;
}
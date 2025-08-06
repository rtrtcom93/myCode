#include <iostream>
using namespace std;

/* ==Conditional operator==
 조건부 연산자는 삼항 연산자(ternary)로 3개의 입력값을 가진다.
 if 문을 짧게 축약하여 사용할 수 있는 장점을 가진다.
 가독성에 문제가 있을 수 있다.

  x > y ? x : y 일때,
  x > y가 참이라면 x를 거짓이라면 y를 결과로 가진다.
 */

int main (int argc, char** argv) {
    int x = 1;
    int y = 2;
    int z = 0;

    z = x > y ? x : y;
    /*
    if (x > y) 
        z = x;
    else 
        z = y;
    */
    cout << "x와 y중 더 큰 값은 : " << z << endl;

    return 0;
}
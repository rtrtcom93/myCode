#include <iostream>
using namespace std;

/* == logical operator ==
 bool type(참, 거짓) 값을 입력 받아
 bool type(참, 거짓) 값을 결과로 가지는 unary/binary 연산자.

 A && B : A와 B 둘다 참이면 참
 A || B : A와 B 중 하나만 참이어도 참
 !A : 논리값의 반대값

*/

int main (int argc, char** argv) {
    int x = 10;
    // int y = 20;

    bool is_x = true;
    bool is_y = false;

    if (is_x == true && is_y == true) 
        cout << "is_x && is_y = " << "true" << endl;
    else
        cout << "is_x && is_y = " << "false" << endl;

    if (x == 10 || is_x == false) 
        cout << "x가 10이 거나 is_x가 false입니다." << endl;
    else 
        cout << "x는 10이 아니며 is_x도 false가 아닙니다." << endl;
    
    if (!is_y) 
        cout << "is_y의 원래 값은 false입니다." << endl;
    else
        cout << "is_y의 원래 값은 true입니다." << endl;
    
    return 0;
}
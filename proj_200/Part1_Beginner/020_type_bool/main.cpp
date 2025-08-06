#include <iostream>
using namespace std;

int main() {
    /*bool
     불리언 자료형은 참(true)과 거짓(false) 두 가지 값을 가질 수 있는 자료형.
     C++에서 bool은 1바이트 크기로, true는 1, false는 0으로 표현됨.
     1, 0으로 사용할 수 있지만, 가독성을 위해 true와 false를 사용하는 것이 좋음.
     조건문이나 반복문에서 주로 사용되며, 논리 연산에 필수적임.
     
     bool 변수는 if 문, while 문 등에서 조건을 평가할 때 유용하게 사용됨.
     */

    int x = 10;  // 정수형 변수 2개 선언
    int y = 6;

    bool is_true = false; // bool 변수 선언 및 초기화 -> 현재는 false로 설정

    // x와 y를 비교하여 x가 y보다 크다면 
    if (x > y) { 
        is_true = true; //is_true bool 변수를 true로 할당 
    } else {
        is_true = false;//아니면 false로 할당
    }   

    //bool 변수 값이 true라면 
    if (is_true == true) {
        cout << "x는 y보다 큽니다." << endl; // 다음 수행
    } else {
        cout << "x는 y보다 작거나 같습니다." << endl; // 아니라면 이 부분 수행
    }   

    return 0;
}
#include <iostream>
using namespace std;

/* == type change 1. static_cast<> ==

전통적으로 자료형을 변경하는 방법은 (type) variable 처럼 괄호 안에 원하는 자료형을 넣어 변수를 할당하는 것.
이런 형변환은 아무 조건 없이 형을 변환 하기 때문에, 형변환이 불가능한 상황에서도 형변환을 시도 함.
C++에서는 가급적 사용하지 않기를 권함.
이런 문제를 해결하기 위해 C++에서는 4가지 자료형 변환 연산자를 제공.

static_cast<> : 가장 기본적인 캐스트 연산.
dynamic_cast<> : 객체지향 언어의 다형성을 이용하여 모호한 타입 캐스팅 오류를 막아줌.
const_case<> : 자료형이 갖고 있는 상수 속성 제거.
reinterpret_cast<> : 어떠한 포인터 타입끼리도 변환.

현재는 static_cast<>에 대해서만 설명.
*/

int main(int argc, char** argv) {
    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y / x);
    int j = (int)y / x;
    double k = y / x;

    cout << " 4.4 / 2 = (static_cast<int>) " << i << endl; // static_cast<int> 4.4 / 2 = static_cast<int> 2.2 = 2
    cout << " 4.4 / 2 = (int)              " << j << endl; // (int) 4.4 / 2 = (int) 2.2 = 2 
    cout << " 4.4 / 2 =                    " << k << endl; // 4.4 / 2 = 2.2    
    
    return 0;
}
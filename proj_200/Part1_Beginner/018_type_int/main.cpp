#include <iostream>

using namespace std;

int main() {
    /*int
    int는 정수를 의미하는 자료형
    범위는 -2,147,483,648 ~ +2,147,483,647
    char과 마찬가지로 unsigned로 선언이 되면 범위는 0 ~ 4,294,967,295
    소수점이 있는 실수를 할당 시, 다음과 같은 오류 발생
    error: invalid conversion from 'double' to 'int' [-fpermissive]
    소수점을 잃어버리기 때문에 데이터 손실 경고가 뜸.

    요즘 컴퓨터는 8bit를 1byte로 다루며, 32비트 또는 64비트 운영체제가 일반적.
    변수는 char < short < int < long < long long 순으로 크기가 커지지만, 컴퓨터 아키텍쳐에 따라 byte 크기가 달라질 수도 있음.
    프로그램 이식성을 고려하여, int 대신 int8, int32, int64 등으로 변수의 크기를 OS가 아닌, 소스 코드에서 미리 결정하기도 함.

    32비트 OS에서는 int가 4byte로 64비트 기준으로 프로그램을 작성하면 버퍼 오버플로우 등이 발생할 여지가 있음.
    이식이 필요할 경우 그 타입의 크기를 미리 제한 하는 것이 필요.
    */

    int positive = 100;
    int negative = -100;
    int ascii_value = 'A';

    cout << "양수 값 : " << positive << endl;
    cout << "음수 값 : " << negative << endl;
    cout << "아스키 값 : " << ascii_value << endl;

    return 0;
}
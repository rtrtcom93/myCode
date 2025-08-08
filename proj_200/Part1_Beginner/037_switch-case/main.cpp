#include <iostream>
using namespace std;

/*
if-else 문이 길어지면 가독성이 안좋아지고, PC(프로그램 카운터) 증가로 성능에 좋지 않다.
이럴 때, switch-case 문을 사용하면 좋다.

switch에서 받은 값과 case 값이 같다면 12번 라인이 수행된 후 switch-case 문은 종료된다.
그리고 만약 case 내에 break라인이 없다면 종료가 되지 않으므로, 반드시 break문 삽입.

switch 값에 어떤 case에도 해당하지 않는 값이 입력될 경우, 아무런 코드도 실행되지 않지만,
default를 구현해 놓을 경우, default가 실행됨.
추후 유지 보수를 위해, default를 구현하는 것이 좋음.
*/

int main() {
    int number = 3;

    switch (number) {
        case 1:
            cout << "number = 1" << endl;
            break;
        case 2:
            cout << "number = 2" << endl;
            break;
        case 3:
            cout << "number = 3" << endl;
            break;
        default :
            cout << "Unknown number" << endl;
            break;
    }

    return 0;
}
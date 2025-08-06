#include <iostream>
using namespace std;

/*
if 문에는 조건을 여러 개 두어 중첩하여 사용할 수 있음.
이때 사용하는 else if문에는 또 다른 조건을 사용할 수 있음.

위에서부터 순차적으로 내려오며 조건을 비교.
하지만 else-if 문을 2~3번 사용하는 것은 지양.
조건문을 일일이 비교하다보면 PC(프로그램 카운터)가 상승하고 성능이 낮아짐.
또한, 가독성도 안좋아짐.

중첩 조건문의 조건이 2개 이상이라면 switch-case 문 사용을 권장.
-알고리즘;
*/


int main() {
    int number1 = 100;
    int number2 = 6;

    if (number1 < number2) 
        cout << "number2가 number1보다 더 큽니다." << endl;
    else if (number2 < number1) 
        cout << "number1이 number2보다 더 큽니다." << endl;
    else 
        cout << "number1과 number2는 같습니다." << endl;

    if (number2 < 7) {
        if (number2 > 3) {
            if (number2 == 4)
                cout << "number2는 4입니다." << endl;
            else if (number2 == 5)
                cout << "number2는 5입니다." << endl;
            else
                cout << "number2는 6입니다." << endl;
        } else {
            if (number2 == 3)
                cout << "number2는 3입니다." << endl;
            else if (number2 == 2)
                cout << "number2는 2입니다." << endl;
            else
                cout << "number2는 1입니다." << endl;
        }
    } 
    return 0;
}
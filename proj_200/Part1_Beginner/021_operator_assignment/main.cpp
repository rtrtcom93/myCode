#include <iostream>
using namespace std;

/* == Operator Assignment ==
   C++에서 변수에 값을 할당할 때 사용하는 연산자.
   '=' 기호를 사용하여 변수에 값을 할당할 수 있음.
   예: int x = 5; // x에 5를 할당
   여러 변수에 동시에 값을 할당할 수도 있음.
   예: int a, b, c; a = b = c = 10; // a, b, c 모두 10으로 설정

   이때 왼쪽에 위치하는 변수를 L-value, 오른쪽에 위치하는 값을 R-value라고 함.
   값을 변경할 수 없는 상수는 L-value가 될 수 없음.
*/


int main() {
    int x = 1;
    int y = 9;

    int z = x + y;

    double i = 1.2;
    double j = 2.3;

    double k = i + j;

    cout << "x + y = " << z << endl;
    cout << "i + j = " << k << endl;

    return 0;
}
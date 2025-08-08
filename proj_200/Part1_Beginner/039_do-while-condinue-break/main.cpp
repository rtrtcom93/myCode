#include <iostream>
using namespace std;

/*
while 문은 조건에 맞지 않는 다면 단 한번도 수행되지 않지만 `do while` 문은 무조건 한번은 실행 됨.
요즘엔 잘 쓰이지 않는 추세이며, 컨테이너를 쓸시 인덱스 문제가 발생할 수 있으므로, 
while, for, switch-case 문 사용을 권장.
*/


int main() {
    int number = 0;

    do {
        number++;

        if (number % 3 == 0) 
            continue;
        else 
            cout << "number 값 : " << number << endl;
    } while (number < 10);

    return 0;
}
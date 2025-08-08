#include <iostream>

using namespace std;

/*
for 문은 특정 범위 안에서 반복하지만 while 문은 특정 조건으로 반복됨.
while도 중첩 순환문 for문처럼 continue와 break를 사용할 수 있음.
조건은 만족시키지 못하면 무한 루프에 빠질 수 있으므로, 조건 설정에 유의해야함.
*/

int main() {
    int number = 0;
    while (number < 10) {

        number++;

        if (number % 3 == 0) 
            continue;
        else
            cout << "number 값 : " << number << endl;
    }

    return 0;
}
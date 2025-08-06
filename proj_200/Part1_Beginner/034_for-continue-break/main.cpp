#include <iostream>

using namespace std;

int main() {
    int number{7};

    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) //i % 3은 i 나누기 3의 나머지
            continue;   // 3의 배수라면 아무것도 안하고 지나가기, i++ 수행
        else if (i == number) // i == number가 참이라면 (즉, 7이라면)
            break;      // 순환문 조건 ~(i < 10)에 해당하지 않더라도, 강제종료
        else 
            cout << "현재 i 값 : " << i << endl; // i == number 조건이 만족 되기 전까지, i < 10이라면 지금 열 수행.
    }

    return 0;
}
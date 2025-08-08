#include <iostream>
using namespace std;

/*
무작위로 선정한 10개의 정수형 배열에서 홀수/짝수를 판별
*/

int main() {
    int data[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17};
    
    for (int i = 0; i < 10; ++i) {
        if (data[i] % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    }

    return 0;
}
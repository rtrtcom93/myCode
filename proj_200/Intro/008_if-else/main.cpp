#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 1;

    if (x > y) {
        cout << "x is greater than y" << endl; // x가 y보다 크면 이 메시지를 출력
    } else if (x < y) {
        cout << "x is less than y" << endl; // x가 y보다 작으면 이 메시지를 출력
    } else {
        cout << "x is equal to y" << endl; // x와 y가 같으면 이 메시지를 출력
    }

    return 0;
}
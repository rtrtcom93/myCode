#include <iostream>

using namespace std;

/*
for ���� Ư�� ���� �ȿ��� �ݺ������� while ���� Ư�� �������� �ݺ���.
while�� ��ø ��ȯ�� for��ó�� continue�� break�� ����� �� ����.
������ ������Ű�� ���ϸ� ���� ������ ���� �� �����Ƿ�, ���� ������ �����ؾ���.
*/

int main() {
    int number = 0;
    while (number < 10) {

        number++;

        if (number % 3 == 0) 
            continue;
        else
            cout << "number �� : " << number << endl;
    }

    return 0;
}
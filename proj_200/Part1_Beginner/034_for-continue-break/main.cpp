#include <iostream>

using namespace std;

int main() {
    int number{7};

    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) //i % 3�� i ������ 3�� ������
            continue;   // 3�� ������ �ƹ��͵� ���ϰ� ��������, i++ ����
        else if (i == number) // i == number�� ���̶�� (��, 7�̶��)
            break;      // ��ȯ�� ���� ~(i < 10)�� �ش����� �ʴ���, ��������
        else 
            cout << "���� i �� : " << i << endl; // i == number ������ ���� �Ǳ� ������, i < 10�̶�� ���� �� ����.
    }

    return 0;
}
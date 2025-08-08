#include <iostream>
using namespace std;

/*
if-else ���� ������� �������� ����������, PC(���α׷� ī����) ������ ���ɿ� ���� �ʴ�.
�̷� ��, switch-case ���� ����ϸ� ����.

switch���� ���� ���� case ���� ���ٸ� 12�� ������ ����� �� switch-case ���� ����ȴ�.
�׸��� ���� case ���� break������ ���ٸ� ���ᰡ ���� �����Ƿ�, �ݵ�� break�� ����.

switch ���� � case���� �ش����� �ʴ� ���� �Էµ� ���, �ƹ��� �ڵ嵵 ������� ������,
default�� ������ ���� ���, default�� �����.
���� ���� ������ ����, default�� �����ϴ� ���� ����.
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
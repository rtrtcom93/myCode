#include <iostream>
using namespace std;

/*
if ������ ������ ���� �� �ξ� ��ø�Ͽ� ����� �� ����.
�̶� ����ϴ� else if������ �� �ٸ� ������ ����� �� ����.

���������� ���������� �������� ������ ��.
������ else-if ���� 2~3�� ����ϴ� ���� ����.
���ǹ��� ������ ���ϴٺ��� PC(���α׷� ī����)�� ����ϰ� ������ ������.
����, �������� ��������.

��ø ���ǹ��� ������ 2�� �̻��̶�� switch-case �� ����� ����.
-�˰���;
*/


int main() {
    int number1 = 100;
    int number2 = 6;

    if (number1 < number2) 
        cout << "number2�� number1���� �� Ů�ϴ�." << endl;
    else if (number2 < number1) 
        cout << "number1�� number2���� �� Ů�ϴ�." << endl;
    else 
        cout << "number1�� number2�� �����ϴ�." << endl;

    if (number2 < 7) {
        if (number2 > 3) {
            if (number2 == 4)
                cout << "number2�� 4�Դϴ�." << endl;
            else if (number2 == 5)
                cout << "number2�� 5�Դϴ�." << endl;
            else
                cout << "number2�� 6�Դϴ�." << endl;
        } else {
            if (number2 == 3)
                cout << "number2�� 3�Դϴ�." << endl;
            else if (number2 == 2)
                cout << "number2�� 2�Դϴ�." << endl;
            else
                cout << "number2�� 1�Դϴ�." << endl;
        }
    } 
    return 0;
}
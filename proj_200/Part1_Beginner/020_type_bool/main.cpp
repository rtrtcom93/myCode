#include <iostream>
using namespace std;

int main() {
    /*bool
     �Ҹ��� �ڷ����� ��(true)�� ����(false) �� ���� ���� ���� �� �ִ� �ڷ���.
     C++���� bool�� 1����Ʈ ũ���, true�� 1, false�� 0���� ǥ����.
     1, 0���� ����� �� ������, �������� ���� true�� false�� ����ϴ� ���� ����.
     ���ǹ��̳� �ݺ������� �ַ� ���Ǹ�, �� ���꿡 �ʼ�����.
     
     bool ������ if ��, while �� ��� ������ ���� �� �����ϰ� ����.
     */

    int x = 10;  // ������ ���� 2�� ����
    int y = 6;

    bool is_true = false; // bool ���� ���� �� �ʱ�ȭ -> ����� false�� ����

    // x�� y�� ���Ͽ� x�� y���� ũ�ٸ� 
    if (x > y) { 
        is_true = true; //is_true bool ������ true�� �Ҵ� 
    } else {
        is_true = false;//�ƴϸ� false�� �Ҵ�
    }   

    //bool ���� ���� true��� 
    if (is_true == true) {
        cout << "x�� y���� Ů�ϴ�." << endl; // ���� ����
    } else {
        cout << "x�� y���� �۰ų� �����ϴ�." << endl; // �ƴ϶�� �� �κ� ����
    }   

    return 0;
}
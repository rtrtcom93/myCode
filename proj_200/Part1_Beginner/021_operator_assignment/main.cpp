#include <iostream>
using namespace std;

/* == Operator Assignment ==
   C++���� ������ ���� �Ҵ��� �� ����ϴ� ������.
   '=' ��ȣ�� ����Ͽ� ������ ���� �Ҵ��� �� ����.
   ��: int x = 5; // x�� 5�� �Ҵ�
   ���� ������ ���ÿ� ���� �Ҵ��� ���� ����.
   ��: int a, b, c; a = b = c = 10; // a, b, c ��� 10���� ����

   �̶� ���ʿ� ��ġ�ϴ� ������ L-value, �����ʿ� ��ġ�ϴ� ���� R-value��� ��.
   ���� ������ �� ���� ����� L-value�� �� �� ����.
*/


int main() {
    int x = 1;
    int y = 9;

    int z = x + y;

    double i = 1.2;
    double j = 2.3;

    double k = i + j;

    cout << "x + y = " << z << endl;
    cout << "i + j = " << k << endl;

    return 0;
}
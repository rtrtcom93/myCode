#include <iostream>
using namespace std;

/* ==Conditional operator==
 ���Ǻ� �����ڴ� ���� ������(ternary)�� 3���� �Է°��� ������.
 if ���� ª�� ����Ͽ� ����� �� �ִ� ������ ������.
 �������� ������ ���� �� �ִ�.

  x > y ? x : y �϶�,
  x > y�� ���̶�� x�� �����̶�� y�� ����� ������.
 */

int main (int argc, char** argv) {
    int x = 1;
    int y = 2;
    int z = 0;

    z = x > y ? x : y;
    /*
    if (x > y) 
        z = x;
    else 
        z = y;
    */
    cout << "x�� y�� �� ū ���� : " << z << endl;

    return 0;
}
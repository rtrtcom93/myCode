#include <iostream>

using namespace std;

int main() {
    /*double
     �Ǽ��� �����͸� �ٷ� �� double �Ǵ� float �ڷ����� ���.
     double�� 64��Ʈ(8����Ʈ) ũ���, -1.7E-308 ~ +1.7E+308�� ������ ����.
     float�� 32��Ʈ(4����Ʈ) ũ���, -3.4E-38 ~ +3.4E+38�� ������ ����.
     
     double�� �Ҽ��� 15�ڸ�, float�� �Ҽ��� 7�ڸ����� ��Ȯ�ϰ� ǥ���� �� ����.
     ���� double�� float�� ȥ�� ��, �����÷ο�(�ִ� �� �ʰ�)�� ����÷ο�(�ּ� �� �̸�)�� �߻��� �� ����.
     
     ��ǻ�ʹ� �Ǽ��� �⺻������ 8����Ʈ�� ó���ϱ� ������, f�� ������ ������ ������ ���� �����޼��� �߻�.
     error: invalid conversion from 'double' to 'float' [-fpermissive]   
     */

    double pi_d = 3.14;
    float  pi_f = 3.14f;

    cout << "pi_d : " << pi_d << endl;
    cout << "pi_f : " << pi_f << endl;

    return 0;
}
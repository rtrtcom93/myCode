#include <iostream>

using namespace std;

int main() {
    /*int
    int�� ������ �ǹ��ϴ� �ڷ���
    ������ -2,147,483,648 ~ +2,147,483,647
    char�� ���������� unsigned�� ������ �Ǹ� ������ 0 ~ 4,294,967,295
    �Ҽ����� �ִ� �Ǽ��� �Ҵ� ��, ������ ���� ���� �߻�
    error: invalid conversion from 'double' to 'int' [-fpermissive]
    �Ҽ����� �Ҿ������ ������ ������ �ս� ��� ��.

    ���� ��ǻ�ʹ� 8bit�� 1byte�� �ٷ��, 32��Ʈ �Ǵ� 64��Ʈ �ü���� �Ϲ���.
    ������ char < short < int < long < long long ������ ũ�Ⱑ Ŀ������, ��ǻ�� ��Ű���Ŀ� ���� byte ũ�Ⱑ �޶��� ���� ����.
    ���α׷� �̽ļ��� ����Ͽ�, int ��� int8, int32, int64 ������ ������ ũ�⸦ OS�� �ƴ�, �ҽ� �ڵ忡�� �̸� �����ϱ⵵ ��.

    32��Ʈ OS������ int�� 4byte�� 64��Ʈ �������� ���α׷��� �ۼ��ϸ� ���� �����÷ο� ���� �߻��� ������ ����.
    �̽��� �ʿ��� ��� �� Ÿ���� ũ�⸦ �̸� ���� �ϴ� ���� �ʿ�.
    */

    int positive = 100;
    int negative = -100;
    int ascii_value = 'A';

    cout << "��� �� : " << positive << endl;
    cout << "���� �� : " << negative << endl;
    cout << "�ƽ�Ű �� : " << ascii_value << endl;

    return 0;
}
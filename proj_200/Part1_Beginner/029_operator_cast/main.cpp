#include <iostream>
using namespace std;

/* == type change 1. static_cast<> ==

���������� �ڷ����� �����ϴ� ����� (type) variable ó�� ��ȣ �ȿ� ���ϴ� �ڷ����� �־� ������ �Ҵ��ϴ� ��.
�̷� ����ȯ�� �ƹ� ���� ���� ���� ��ȯ �ϱ� ������, ����ȯ�� �Ұ����� ��Ȳ������ ����ȯ�� �õ� ��.
C++������ ������ ������� �ʱ⸦ ����.
�̷� ������ �ذ��ϱ� ���� C++������ 4���� �ڷ��� ��ȯ �����ڸ� ����.

static_cast<> : ���� �⺻���� ĳ��Ʈ ����.
dynamic_cast<> : ��ü���� ����� �������� �̿��Ͽ� ��ȣ�� Ÿ�� ĳ���� ������ ������.
const_case<> : �ڷ����� ���� �ִ� ��� �Ӽ� ����.
reinterpret_cast<> : ��� ������ Ÿ�Գ����� ��ȯ.

����� static_cast<>�� ���ؼ��� ����.
*/

int main(int argc, char** argv) {
    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y / x);
    int j = (int)y / x;
    double k = y / x;

    cout << " 4.4 / 2 = (static_cast<int>) " << i << endl; // static_cast<int> 4.4 / 2 = static_cast<int> 2.2 = 2
    cout << " 4.4 / 2 = (int)              " << j << endl; // (int) 4.4 / 2 = (int) 2.2 = 2 
    cout << " 4.4 / 2 =                    " << k << endl; // 4.4 / 2 = 2.2    
    
    return 0;
}
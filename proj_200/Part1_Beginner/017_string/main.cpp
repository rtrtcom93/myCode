#include <string> 
/*C++ ǥ�� ���̺귯������ ���ڿ��� ���ϰ� �����ϰ� ����� �� �ִ� string�� �ִ�.
  char []�� �̿��� �� ������ string�� �� �� �ٷ�� ���ϰ�, ȿ�����̴�.*/ 
#include <iostream>

using namespace std;

int main() {
    string my_country = "korea";
    string my_job = "graduate student";

    cout << "Country : " << my_country << endl;
    cout << "Job : " << my_job << endl;

    string my_info  = my_country + ", " + my_job;

    cout << "My Info : " << my_info << endl;

    return 0;
}
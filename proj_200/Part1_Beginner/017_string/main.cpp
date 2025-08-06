#include <string> 
/*C++ 표준 라이브러리에는 문자열을 편리하고 안전하게 사용할 수 있는 string이 있다.
  char []을 이용할 수 있지만 string이 좀 더 다루기 편하고, 효율적이다.*/ 
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
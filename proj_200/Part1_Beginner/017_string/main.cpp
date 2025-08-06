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

    string my_info  = my_country + ", " + my_job; //C에서는 두 문자열을 합칠 때, strcat()을 호출하지만, C++에서는 '+'를 이용해 합칠 수 있다.

    cout << "My Info : " << my_info << endl;
    //C에서는 문자열을 수정하기 위해서는 malloc()을 사용하여 문자열을 복사, 추가, 삭제를 수행해야 했다.
    //이 작업은 문자열의 크기, 문자열 끝의 null, 유니코드, 멀티바이트 상황 등 고려할 것이 많았지만, C++에서는 직관적인 수정이 가능.

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

/*
다음 문장에서 'a'의 개수를 구하세요.
    "The Jin state was formed in sourthern korea by the 3rd century"
*/

int main() {
    string sentence {"The Jin state was formed in sourthern korea by the 3rd century"};\
    
    char find{'a'};
    int count{0};

    for (size_t i = 0; i < sentence.size(); i++) { 
        //or sentencel.length() -> O(N) : null을 포함하지 않는 실제 문자열의 길이, int 타입, string 클래스에만 있는 메소드.
        //in constrast, .size() -> O(1), 반환 값은 size_t 타입, 표준 라이브러리에서 제공되는 대다수의 컨테이너 클래스에 적용 가능.)
        if (sentence[i] == find) {
            ++count;
        } else {
            continue;
        }
    }

    cout << "The number of " << find << " is " << count << "." << endl;

    return 0;
}
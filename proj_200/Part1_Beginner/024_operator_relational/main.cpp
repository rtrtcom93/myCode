#include <string>
#include <iostream>
using namespace std;

/* == relational operator==
 참/거짓 외 다른 2개의 값을 입력 받아
 bool type 값(참, 거짓)을 결과로 가지는 binary operator

 A == B : A와 B가 같으면 참
 A != B : A와 B가 다르면 참
 A > B : A가 B보다 크면 참
 A < B : A가 B보다 작으면 참
 A >= B : A가 B보다 크거나 같으면 참
 A <= B : A가 B보다 작거나 같으면 참
*/

int main (int argc, char** argv) {
    string publisher = "정보문화사";
    string language = "C++";

    int x = 10;
    int y = 10;

    if (publisher != language) 
        cout << "두 문장은 같지 않습니다." << endl;
    else
        cout << "두 문장은 같습니다." << endl;
    
    if (x >= y)
        cout << "x는 y보다 크거나 같습니다." << endl;
    else 
        cout << "x는 y보다 크거나 같지 않습니다." << endl;
    
    if (x <= 20)
        cout << "x는 20보다 작거나 같습니다." << endl;
    else 
        cout << "x는 20보다 작거나 같지 않습니다." << endl;


    return 0;
}
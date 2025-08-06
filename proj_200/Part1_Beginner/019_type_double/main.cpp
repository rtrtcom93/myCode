#include <iostream>

using namespace std;

int main() {
    /*double
     실수형 데이터를 다룰 땐 double 또는 float 자료형을 사용.
     double은 64비트(8바이트) 크기로, -1.7E-308 ~ +1.7E+308의 범위를 가짐.
     float는 32비트(4바이트) 크기로, -3.4E-38 ~ +3.4E+38의 범위를 가짐.
     
     double은 소수점 15자리, float는 소수점 7자리까지 정확하게 표현할 수 있음.
     만약 double과 float를 혼용 시, 오버플로우(최대 값 초과)나 언더플로우(최소 값 미만)가 발생할 수 있음.
     
     컴퓨터는 실수를 기본적으로 8바이트로 처리하기 때문에, f를 붙이지 않으면 다음과 같은 에러메세지 발생.
     error: invalid conversion from 'double' to 'float' [-fpermissive]   
     */

    double pi_d = 3.14;
    float  pi_f = 3.14f;

    cout << "pi_d : " << pi_d << endl;
    cout << "pi_f : " << pi_f << endl;

    return 0;
}
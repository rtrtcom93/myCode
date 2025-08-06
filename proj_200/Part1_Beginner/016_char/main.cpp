#include <iostream>
using namespace std;

    /* ==type char==
     char 자료형은 문자를 저장하여 아스키 코드 값에 숫자로 값을 할당.
     char 자료형의 범위는 -127~+127이며, unsigned 키워드를 붙일 경우 0~+255로 변경 됨.

    아스키 코드 : 전세계에서 공통으로 사용하는 컴퓨터 문자 값.
     1. 특수문자 : 33~47, 58~64, 91~96, 123~126
     2. 숫자 : 48~57
     3. 대문자 : 65~90
     4. 소문자 : 97~122 */

int main() {
    char ch1 = 'c'; // char 변수는 문자로 값을 할당 할 수 있음.
    char ch2 = 200; // char 변수의 범위를 초과하는 값이 입력되면 보수를 취함. (-127=128)=> 128-200 =-72로 char의 최소 범위 -127에서 72 증가한 -56이 저장됨.

    unsigned char ch3 = 'c'; // unsigned char는 기호 없는 char이란 뜻으로 양수만 저장한다는 의미. char ch1과 동일.
    unsigned char ch4 = 200; // unsigned char는 0~255 범위의 값을 저장할 수 있다. 200은 양수이므로 그대로 저장됨. 하지만 200에 해당하는 아스키 문자는 없으므로 물음표 출력.

    printf("char ch1 = %c, %d\n", ch1, ch1);
    printf("char ch2 = %c, %d\n", ch2, ch2);
    printf("unsigned char ch3 = %c, %d\n", ch3, ch3);
    printf("unsigned char ch4 = %c, %d\n", ch4, ch4);

    return 0;
}
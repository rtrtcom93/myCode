#include <iostream>
using namespace std;

/* == comma operator ==
쉼표 연산자는 비슷한 의미의 코드를 이어 붙이는데 사용.
예를 들어, int 변수를 여러번 이어붙여 한벙네 변수를 선언하고 초기화 할 수 있음.
하지만 이것은 좋은 습관은 아님.
한 줄에 변수 한개를 선언하는 것이 좋음.
*/

int main(int argc, char** argv) {
    int goguryeo = 37, backjea = 18, silla = 57;
    
    cout << "삼국 건국 연도\n";
    printf("고구려 B.C.%d년, 백제 B.C.%d년, 신라 B.C.%d년\n", goguryeo, backjea, silla);

    return 0;
}
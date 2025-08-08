#include <iostream>
using namespace std;

int main() {

    // for (int i = 0; i < 15; i++) {
    //     for (int j = 0; j < 9; j++) {
    //         cout << i+1 << " X " << j+1 << " = " << (i+1)*(j+1) << endl;            
    //     }
    // }


/*        k = 0   k = 1   k = 2  k = 3
i = 0     1  = 1
i = 1     2       3 = 1 + 2 
i = 2     4       5       6 = 1 + 2 + 3
i = 3     7       8       9      10 = 1 + 2 + 3 + 4

N pivot의 위치는 i
N pivot 값은 \sum_{i=1}^{N+1}{i}

*/


    int pivot{0};

    for (int i = 0; i < 15; i+=pivot) { // 개행은 0, pivot까지 개수만큼 건너 뛰기 (구구단 계산한 개수 건너 뛰기)
        pivot++;                        // pivot 값 1부터 시작
        for (int j = 0; j < 9; j++) {   // 구구단 시작
            cout << i+1 << " X " << j+1 << " = " << (i+1)*(j+1); //첫 열 (tap을 띄우기 위함)           
            for (int k = 1; k < pivot; k++) {                    //두 번째(k+1) 열부터 피벗까지
                cout << "\t";                                    //tap으로 띄우고 다음 열의 (j+1)번째 구구단 계산
                cout << (i+k+1) << " X " << (j+1) << " = " << (i+k+1)*(j+1);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
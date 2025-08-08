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

N pivot�� ��ġ�� i
N pivot ���� \sum_{i=1}^{N+1}{i}

*/


    int pivot{0};

    for (int i = 0; i < 15; i+=pivot) { // ������ 0, pivot���� ������ŭ �ǳ� �ٱ� (������ ����� ���� �ǳ� �ٱ�)
        pivot++;                        // pivot �� 1���� ����
        for (int j = 0; j < 9; j++) {   // ������ ����
            cout << i+1 << " X " << j+1 << " = " << (i+1)*(j+1); //ù �� (tap�� ���� ����)           
            for (int k = 1; k < pivot; k++) {                    //�� ��°(k+1) ������ �ǹ�����
                cout << "\t";                                    //tap���� ���� ���� ���� (j+1)��° ������ ���
                cout << (i+k+1) << " X " << (j+1) << " = " << (i+k+1)*(j+1);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
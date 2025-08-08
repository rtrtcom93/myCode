#include <iostream>
using namespace std;

int main() {
    // int n_fin = 10;
    // int n1 = 0;
    // int n2 = 1;
    // int n3{0};
    // int temp{0};

    // for (int i = 2; i < n_fin; ++i) {
    //     n3 = n2 + n1;
    //     cout << i+1 << "th Pibonacci sequence is " << n3 << endl;
    //     temp = n2;
    //     n2 = n3;
    //     n1 = temp;
    // }

    int p{0};
    int n{0};
    int temp{0};

    for (int i = 0; i < 10; i++) {
        p = 0;
        n = 1;
        for (int j = 0; j < i+1; j++) {
            cout << n << ", ";
            temp = n;
            n += p;
            p = temp; 
        }
        cout << endl;
    }

    return 0;
}
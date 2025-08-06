#include <iostream>
using namespace std;

int main() {
    const int kArraySize = 3;

    int founding[kArraySize];
    founding[0] = 918;
    founding[1] = 1382;
    founding[2] = 1948;

    cout << "고려 건국 연도: " << founding[0] << "년" << endl;
    cout << "조선 건국 연도: " << founding[1] << "년" << endl;
    cout << "한국 건국 연도: " << founding[2] << "년" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int x = 10; // Global variable
            // This variable is accessible in all functions unless shadowed by a local variable with the same name.

int Func1() {
    int y = x + 10; // Local variable y, which is initialized with the value of global x plus 10
    return y;
}

int Func2() {
    int x = 100; // Local variable x, which "shadows" the global variable x within this function
    return x;
}

int main() {
    cout << "y = " << Func1() << endl; // y = 20
    cout << "x = " << Func2() << endl; // x = 100
    cout << "x = " << ::x << endl; // x = 10 (global variable)

    return 0;
}

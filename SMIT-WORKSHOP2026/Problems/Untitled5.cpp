#include <iostream>
using namespace std;
// Call by Value: A copy of the data is passed. The original variable is NOT changed.
void callByValue(int num) {
    num = num + 10;
    cout << "Inside callByValue function: " << num <<endl;
}

// Call by Reference: An alias/reference to the original variable is passed. The original variable IS changed.
void callByReference(int &num) { // Notice the ampersand (&)
    num = num + 10;
    cout << "Inside callByReference function: " << num <<endl;
}

int main() {
    int x = 5;
    cout << "Original value of x: " << x << "\n" <<endl;

    // 1. Testing Call by Value
    callByValue(x);
    cout << "Value of x after callByValue: " << x << " (Unchanged)\n" <<endl;

    // 2. Testing Call by Reference
    callByReference(x);
   cout << "Value of x after callByReference: " << x << " (Modified)" << endl;

    return 0;
}


#include<iostream>
using namespace std;

// = Functions with Parameters
//   - Accept inputs (arguments) to perform operations.

// = Example:
void printSum(int a, int b) {   // Parameters pased form function call
    cout << "Sum: " << a + b << endl;
}

int main() {
    printSum(10, 20);  // Sum: 30 (any numbers of parameters given at function defination that number of parameters must be passed)
    return 0;
}

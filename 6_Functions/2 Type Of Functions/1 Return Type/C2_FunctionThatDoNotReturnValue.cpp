#include<iostream>
using namespace std;

// = Functions that Do Not Return a Value (void) (No any value returned)
//   - Use void as the return type. 
//   - No return statement (or just return;).

// Example:

void greet() {   // Void return type (i.e nothing will returned)
    cout << "Hello, World!" << endl;
    // No any return statement
}

int main() {
    greet();    // Hello, World! 
    return 0;
}
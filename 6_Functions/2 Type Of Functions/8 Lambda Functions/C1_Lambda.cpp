#include<iostream>
using namespace std;

// = Lambda Functions (Anonymous Functions)
//   - Short, unnamed functions (introduced in C++11).
//   - Useful for quick operations.

// = Syntax:
//    [capture-list](parameters) -> return-type { 
//             // Function body 
//    };
// Example:

int main() {
    auto sum = [](int a, int b) { return a + b; };
    cout << sum(3, 4); // Output: 7

    auto greet = []() { 
        cout << "Hello, World!" << endl; 
    };
    greet(); // Calls the lambda
    // Hello, World!

    // Lambda with Return Type
    auto str1 = [](string name) -> string {
        return "Hello, " + name;
    };
    cout << str1(string("Shreyash")) << endl;  // Explicitly convert to std::string
    // Hello, Shreyash
    return 0;
}
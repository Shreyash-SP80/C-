
// = Variable Scoping:
//  - Variable scope determines where a variable can be accessed in a program.
//  - C++ has different types of scopes, which define the lifetime and visibility of variables.


// Types of Variable Scopes

// 1. Local Scope (Block Scope)
//  - Declared inside a function or block ({}).
//  - Only accessible within that block.
//  - Destroyed when the block ends.

// Example:
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10; // Local to main()
    
//     if (true) {
//         int y = 20; // Local to if-block
//         cout << x << endl; // Valid (x is in outer scope)
//     }
    
//     // cout << y; // Error: y is not accessible here
//     return 0;
// }

// Key Points:
// x is accessible inside the if block (nested scope).
// y dies after the if block ends.



// 2. Global Scope
//  - Declared outside all functions.
//  - Accessible anywhere in the program.
//  - Lifetime: Until program termination.

// Example:
// #include <iostream>
// using namespace std;

// int globalVar = 100; // Global variable

// void func() {
//     cout << globalVar << endl; // Accessible
// }

// int main() {
//     cout << globalVar << endl; // Accessible
//     func();
//     return 0;
// }

// Key Points:
// Can be modified by any function (risky, can lead to bugs).
// Avoid overusing global variables.



// 3. Function Parameter Scope
// Variables passed as function parameters.
// Local to that function.

// Example:
// #include <iostream>
// using namespace std;

// void printNumber(int num) { // num is local to printNumber
//     cout << num << endl;
// }

// int main() {
//     printNumber(5);
//     // cout << num; // Error: num is not accessible here
//     return 0;
// }



// 4. Class Scope (Member Variables)
// Variables declared inside a class or struct.
// Accessible via class objects.

// Example:
// #include <iostream>
// using namespace std;

// class Car {
// public:
//     string model; // Class-scope variable
//     void display() {
//         cout << model << endl;
//     }
// };

// int main() {
//     Car myCar;
//     myCar.model = "Tesla"; // Accessing class-scope variable
//     myCar.display();
//     return 0;
// }



// 5. Namespace Scope
// Variables inside a namespace.
// Accessed using namespace::variable

// Example:
#include <iostream>
using namespace std;

namespace MyNS {
    int x = 50; // Namespace-scoped
}

int main() {
    cout << MyNS::x << endl; // Access using ::
    return 0;
}



// Scope Resolution Operator (::)
// Used to access global variables when a local variable has the same name.

// Example:
#include <iostream>
using namespace std;

int x = 100; // Global x

int main() {
    int x = 50; // Local x
    cout << x << endl;       // 50 (local)
    cout << ::x << endl;     // 100 (global)
    return 0;
}
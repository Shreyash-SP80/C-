#include<iostream>
using namespace std;

// = Function:
//   - A function in C++ is a block of code that performs a specific task.
//   - Functions help in modularizing code, improving reusability, and making programs easier to understand.
//   - i.e A function is an reusable block of code that perform specific task

// = Syntax:
//   return_type   Function_Name(data_type arg1, ..) {
//             // code to be executed
//             return (value);  Optional
//   }


// = Function sepecification:
//   1) Function declaration (Optional)
//   2) Function defination
//   3) Function call


// 1) Function Declaration (Prototype): Tells the compiler about the function (name, return type, parameters).
// 2) Function Defination: Contains the actual code.
// 3) Function call: execute that block code to perform specific task.

// = Syntax:

// FUnction Declaration
//    return_type  Function_name(datatype arg1, ..);


// Function Defination
//    return_type Function_name(datatype arg1, ..) {   // Arguments must be same give at declaration
//          // Code to bve executed
//          return value;   Optional
//    }


// = Function_name(arg1, ..);   // Pass same parameters given at defination

// Example:
// Declaration
int add(int a, int b);

// Definition
int add(int a, int b) {
    return a + b;
}


int main() {
    // Call
    cout << add(10, 20);  // 30
    return 0;
}
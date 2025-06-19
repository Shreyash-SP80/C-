
#include<iostream>
using namespace std;

// Conditional statements
//  - Conditional statements allow a program to make decisions based on certain conditions.
//  - They execute different blocks of code depending on whether a condition is true or false.


// 1. if Statement
//  - Executes a block of code only if the condition is true.

// Syntax:
//   if (condition) {
//      // Code to execute if condition is true
//   }


int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Your are child" << endl;
    }
    return 0;
}

// Output:
// Enter your age: 17
// Your are child

// Enter your age: 18
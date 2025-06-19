
#include<iostream>
using namespace std;

// 2. if-else Statement
// Executes one block if the condition is true, and another if false.

// Syntax:
//  if (condition) {
//         // Code if condition is true
//  } else {
//         // Code if condition is false
//  }

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Your are below 18" << endl;
    } else {
        cout << "Your are above 18" << endl;
    }

    return 0;
}

// Output:
// Enter your age: 19
// Your are above 18

// Enter your age: 17
// Your are below 18
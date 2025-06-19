#include<iostream>
using namespace std;

// 4. Nested if Statements
// An if or else block containing another if-else statement.

// Syntax:
// if (condition1) {
//     if (condition2) {
//         // Code if both conditions are true
//     }
//     else {
//         // Code it condition2 false but condition1 true
//     }
// }
// else {
//     if (condtion3) {
//        // Code if condtion3 is true and other are false
//     }
//     else {
//        // Code if all conditions false
//     }
// }

int main() {

    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        if (hasID) {
            cout << "You can enter the club." << endl;
        } else {
            cout << "ID required." << endl;
        }
    } else {
        cout << "You are too young." << endl;
    }

    return 0;
}

// Output:
// You can enter the club.
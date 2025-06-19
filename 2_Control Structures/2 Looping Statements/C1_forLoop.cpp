
#include<iostream>
using namespace std;

// Loops are used to repeat a block of code multiple times based on a condition. C++ provides three main types of loops:
// for loop
// while loop
// do-while loop

// Additionally, we have loop control statements (break, continue, goto).


// 1. for Loop
// - Best when the number of iterations is known beforehand.

// Syntax:
//      for (initialization; condition; counter) {
            // Code to execute
//      }

// Initialization: Executes once at the start.
// Condition: Checked before each iteration.
// counter: incrementation or decrementation

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";  // Prints 1 2 3 4 5
    }

    // Nested for Loop
    // A for loop inside another for loop.

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << "," << j << " ";   // 1,1 1,2 1,3 2,1 2,2 2,3 3,1 3,2 3,3 
        }
    }
    return 0;
}
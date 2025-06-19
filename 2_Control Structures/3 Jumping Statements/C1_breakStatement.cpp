
#include<iostream>
using namespace std;

// Jumping statements:
// Jumping statements allow you to alter the normal flow of program execution by transferring control to another part of the program.


// 1. break Statement
//  Purpose:
//      - Terminates the loop or switch statement immediately
//      - Transfers control to the statement following the loop/switch

// Syntax:
//      break;

int main() {
    // In Loop
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exits loop when i reaches 5
        }
        cout << i << " ";
    }
    // Output: 1 2 3 4

    // In Switch Case
    int day = 2;
    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;  // Only this executes
        case 3: cout << "Wednesday"; break;
    }
    // Output: Tuesday
    return 0;
}
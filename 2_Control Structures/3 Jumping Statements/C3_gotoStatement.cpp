
#include<iostream>
using namespace std;

// 3. goto Statement
//  Purpose:
//      Transfers control to a labeled statement
//      Generally discouraged (can create spaghetti code)

// Syntax:
//      goto label;
//      ...
//      label:
//         // statement(s)

int main() {
    
    int n = 1;
    start:  // label
        cout << n << " ";
        n++;
    if (n <= 5) {
        goto start;  // Jumps back to label
    }
    // Output: 1 2 3 4 5

    return 0;
}
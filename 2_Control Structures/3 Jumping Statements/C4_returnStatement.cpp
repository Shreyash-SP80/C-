
#include<iostream>
using namespace std;

// 4. return Statement
//  Purpose:
//      Exits a function immediately
//      Can optionally return a value

// Syntax:
//      return;          // for void functions
//      return value;    // for non-void functions

void check(int x) {
    if (x < 0) {
        return;  // Exits function early
    }
    cout << "Positive number";
}

int main() {

    check(-1);  // No output
    check(2);   // Positive number

    return 0;
}
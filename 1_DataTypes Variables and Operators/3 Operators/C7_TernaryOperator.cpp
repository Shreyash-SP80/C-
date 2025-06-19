
#include<iostream>
using namespace std;

// 7. Ternary (Conditional) Operator
// Short form of if-else.

// Syntax:
//  condition ? expression1 : expression2

int main() {
    // Example:
    int x = 10, y = 20;
    int max = (x > y) ? x : y; 
    cout << max << endl; // max = 20
    
    return 0;
}

#include<iostream>
using namespace std;

// 6. Ternary Operator (? :)
// A shorthand for if-else.

// Syntax:
// condition ? expression1 : expression2;

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    cout << "Max: " << max << endl;   // Max: 20
    return 0;
}
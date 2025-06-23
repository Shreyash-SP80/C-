#include<iostream>
using namespace std;

// = Recursion (A Function Calling Itself)
//   - A function that calls itself until a base condition is met.

// Example:

int factorial(int n) {
    if (n <= 1) return 1; // Base case
    else return n * factorial(n - 1); // Recursive call
}

int main() {
    cout << factorial(5) << endl;   // 120
    return 0;
}
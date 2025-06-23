#include<iostream>
using namespace std;

// = inline Functions
//   - Suggests the compiler to replace function calls with the actual code (for optimization).
//   - Used for small, frequently called functions.

// Example:

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(2) << endl;   // 4
    return 0;
}
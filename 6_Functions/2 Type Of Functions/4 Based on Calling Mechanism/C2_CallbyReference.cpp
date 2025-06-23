#include<iostream>
using namespace std;

// = Call by Reference
//   - The actual memory address is passed.
//   - Changes inside the function affect the original variable.

// = Example:

void increment(int &x) {   // Reference operator used here
    x++;
}

int main() {
    int num = 5;
    cout << num << endl; // 5
    increment(num);
    cout << num << endl; // Now 6 (modified)
}
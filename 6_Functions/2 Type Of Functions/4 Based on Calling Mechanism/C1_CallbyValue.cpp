#include<iostream>
using namespace std;


// = Call by Value
//   - A copy of the argument is passed.
//   - Changes inside the function do not affect the original variable.

// = Example:

void increment(int x) {
    x++;
}

int main() {
    int num = 5;
    cout << num << endl;  // 5
    increment(num);
    cout << num << endl; // Still 5 (unchanged)
}
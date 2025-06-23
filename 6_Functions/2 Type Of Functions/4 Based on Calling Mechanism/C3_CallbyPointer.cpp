#include<iostream>
using namespace std;

// = Call by Pointer (Address)
//   - Similar to call by reference but uses pointers.

// = Example:
void increment(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    cout << num << endl;  // 5
    increment(&num);   // used & operator because pointers stores address
    cout << num << endl;  // Now 6 (modified)
}

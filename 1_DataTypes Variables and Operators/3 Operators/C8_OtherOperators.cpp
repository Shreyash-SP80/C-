#include<iostream>
using namespace std;


int main() {
    // Comma Operator (,): Evaluates multiple expressions.
    int a = (5, 6);  // a = 6 (Last value)
    cout << a << endl;   // 6

    // Address-of (&): Gets memory address.
    int x = 5;
    int* ptr = &x; // ptr stores address of x

    // Dereference (*): Accesses value at a pointer.
    cout << *ptr << endl;  // 5;
    return 0;
}
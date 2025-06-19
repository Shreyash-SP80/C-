#include<iostream>
using namespace std;

// 6. Bitwise Operators
// Perform operations on binary bits.

//    Operator	Description	    Example (a=5, b=3)	    Result (Binary)
//      &	    Bitwise AND	    5 & 3 (101 & 011)	    1 (001)
//      |	    Bitwise OR	    5 | 3 (101	011`)	    7 (111)
//      ^	    Bitwise XOR	    5 ^ 3 (101 ^ 011)	    6 (110)
//      ~	    Bitwise NOT	    ~5 (~00000101)	        -6 (11111010)
//      <<	    Left Shift	    5 << 1 (0101→1010)	    10
//      >>	    Right Shift	    5 >> 1 (0101→10)	    2


int main() {
    int a = 5, b = 3;
    cout << (a & b) << endl;  // 1
    cout << (a | b) << endl;  // 7
    cout << (a ^ b) << endl;  // 6
    cout << (~a) << endl;     // -6
    cout << (a << 1) << endl; // 10 (shift left by 1)
    cout << (a >> 1) << endl; // 2

    return 0;
}
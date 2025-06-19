#include<iostream>
using namespace std;

// 5. Increment & Decrement Operators
// Change value by 1.

//  Operator	Description	        Example	    Result
//   ++x	      Pre-increment	     ++x	    x = x + 1 before use
//   x++	      Post-increment	 x++	    x = x + 1 after use
//   --x	      Pre-decrement	     --x	    x = x - 1 before use
//   x--	      Post-decrement	 x--	    x = x - 1 after use

int main() {
    int x = 5;
    cout << ++x << endl;  // 6 (incremented first then use)
    cout << x++ << endl;  // 6 (used first, then incremented)
    cout << x << endl;    // 7

    cout << --x << endl;  // 6 (decrement first then use)
    cout << x-- << endl;  // 6 (used first, then decrement)
    cout << x << endl;    // 5
    return 0;
}

#include<iostream>
using namespace std;

// 4. Logical Operators
// Combine multiple conditions.

//  Operator	Description 	Example	            Result
//      &&	      Logical AND	(5 > 3) && (2 < 4)	true
//      ||		  Logical OR    (5 > 3) || (2 > 4)	true
//      !	      Logical NOT	!(5 == 5)	        false

int main() {
    bool x = true, y = false;
    cout << (x && y) << endl;  // 0 (false)
    cout << (x || y) << endl;  // 1 (true)
    cout << !x << endl;        // 0 (false)
    return 0;
}
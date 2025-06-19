#include<iostream>
using namespace std;

// 3. Relational Operators
// Compare two values (return true or false).

//  Operator	Description	                Example	    Result
//      ==	        Equal to	            5 == 5	    true
//      !=	        Not equal	            5 != 3	    true
//      >	        Greater than	        10 > 5	    true
//      <	        Less than	            3 < 2	    false
//      >=	        Greater than or equal	5 >= 5	    true
//      <=	        Less than or equal	    4 <= 3	    false


int main() {
    int a = 5, b = 3;
    cout << (a == b) << endl;  // 0 (false)
    cout << (a > b) << endl;   // 1 (true)
    return 0;
}
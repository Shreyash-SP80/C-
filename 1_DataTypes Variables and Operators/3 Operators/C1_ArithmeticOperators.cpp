#include<iostream>
using namespace std;

// = Operators:
//   - Operators in C++ are symbols that perform operations on variables and values.
//    i.e Operators are used to perform the operation on the operands
//   - They are classified into different categories based on their functionality.


// 1) Arithmetic Operators

// - Used for mathematical calculations.

// Operator	     Description	        Example	    Result
    //   +         Addition	             5 + 3	      8
    //   - 	       Subtraction	         10 - 4	      6
    //   *         Multiplication	     3 * 4	      12
    //   /	       Division	             10 / 2	      5
    //   %	       Modulus (Remainder)	 10 % 3	      1


int main() {
    int a = 10, b = 3;
    cout << a + b << endl;  // 13
    cout << a % b << endl;  // 1 (remainder)

    // int/int = int 
    // float/int = float
    // double/int = double

    int a1 = 2.0 / 5;  // 0.4 answer assigned to int so 0 comes
    cout << a1 << endl;  // 0
    return 0;
}


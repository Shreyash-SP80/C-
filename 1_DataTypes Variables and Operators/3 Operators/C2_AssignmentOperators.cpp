#include<iostream>
using namespace std;


// 2. Assignment Operators
// Assign values to variables.

//  Operator	Example	        Equivalent To
//      =	      x = 5	            x = 5
//      +=	      x += 3	        x = x + 3
//      -=	      x -= 2	        x = x - 2
//      *=	      x *= 4	        x = x * 4
//      /=	      x /= 2	        x = x / 2
//      %=	      x %= 3	        x = x % 3

int main() {
    int x = 10;
    cout << x << endl;  // 10

    x += 5;  // x = 15
    cout << x << endl;  // 15

    x %= 3;  // x = 0 (15 % 3)
    cout << x << endl;  // 0
    return 0;
}
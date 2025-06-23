#include<iostream>
using namespace std;

// = Function that returns value
//   - Must have a return type (int, float, string, etc.).
//   - Use the return statement to send back a value.

// = Example:

int add(int a, int b) {   // also returntype according which datatype value your are returning
    return a + b;   // return statement must
}


int  main() {
    cout << add(10, 20) << endl;   // 30 (Returned value directly printed)
    return 0;
}
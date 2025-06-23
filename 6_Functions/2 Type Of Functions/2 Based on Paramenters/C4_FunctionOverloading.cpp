#include<iostream>
using namespace std;

// = Function Overloading
//   - Multiple functions with the same name but different parameters (differs in signature).

// = Example:

int add(int a, int b) {
    return a + b;
}

string add(string n) {
    return "This is: " + n;
}
int main() {

    cout << add(10, 20) << endl; // 30
    cout << add("10") << endl;   // This is: 10 (Called 2nd function)
    return 0;
}
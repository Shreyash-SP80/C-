#include <iostream>
using namespace std;

// = Default Arguments
//   - Parameters can have default values if not provided at calling.

// = Example:

void  greet(string = "Ram");   // In function declaration

void printMessage(string msg = "Default Message") {
    cout << msg << endl;
}



int  main() {
    // Calling:
    printMessage();       // Output: Default Message
    printMessage("Hi!");  // Output: Hi!

    greet();    // Hello Ram (Default value)
    greet("Shreyash");   // Hello Shreyash (Passed value)

    return 0;
}

void  greet(string name) {
    cout << "Hello " << name << endl;
}
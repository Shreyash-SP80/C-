
#include<iostream>
using namespace std;

// 2. while Loop
// Best when the number of iterations is unknown (condition-based).
// Entry controled loop i.e 1st checks the condtion the execute if true

// Syntax:
//      while (condition) {
            // Code to execute
//      }

// Condition is checked before each iteration.
// If false initially, the loop never runs.


int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";  // Prints 1 2 3 4 5
        i++;
    }

    // Infinite while Loop
    // A loop that never stops (usually due to a missing update).
    
    while (true) {
        cout << "Infinite loop!" << endl;
        // Use `break` to exit
    }
    return 0;
}
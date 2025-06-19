
#include<iostream>
using namespace std;

// 3. do-while Loop
// Similar to while, but executes at least once (condition checked after the first iteration).
// Exit controlled loop i.e 1st execute then it can check for the condition

// Syntax:
//      do {
//          // Code to execute
//      } while (condition);


int main() {
    int i = 1;
    do {
        cout << i << " ";  // Prints 1 even if condition is false
        i++;
    } while (i <= 5);
    // 1 2 3 4 5 
    return 0;
}
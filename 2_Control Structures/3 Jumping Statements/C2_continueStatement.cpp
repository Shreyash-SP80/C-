
#include<iostream>
using namespace std;

// 2. continue Statement
//  Purpose:
//      Skips the current iteration of a loop
//      Continues with the next iteration

// Syntax:
//      continue;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skips iteration when i is 3
        }
        cout << i << " ";
    }
    // Output: 1 2 4 5
    return 0;
}
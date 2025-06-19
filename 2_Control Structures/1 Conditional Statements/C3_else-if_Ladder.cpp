
#include<iostream>
using namespace std;

// 3. else-if Ladder
// Checks multiple conditions sequentially if any one of them is true the execute that block 

// Syntax:
//  if (condition1) {
//      // Code if condition1 is true
//  } else if (condition2) {
//      // Code if condition2 is true
//  } else {
//      // Code if all conditions are false
//  }

int main() {
    int marks = 85;
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }
    return 0;
}

// Output:
// Grade: A
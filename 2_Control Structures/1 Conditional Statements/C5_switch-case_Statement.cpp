
#include<iostream>
using namespace std;

// 5. switch-case Statement
// Used when multiple conditions are based on the same variable.
// More efficient than if-else for multiple fixed values.

// Syntax:
//   switch (variable/Expression) {
//         case value1:
//             // Code for value1
//              break;
//         case value2:
//             // Code for value2
//             break;
//         default:
//             // Code if no case matches
//   }


// Important Notes on switch-case:
// break is necessary to exit the switch block.
// default runs if no case matches.
// Works with int, char, and enum (not float or string in standard C++).

int main() {

    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Average." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}

// Output:
// Good!
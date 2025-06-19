#include<iostream>
using namespace std;

int main() {

    
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Char square-1: " << endl;
    // A A A
    // B B B
    // C C C
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // If you know ascii value
            cout << char(64+i) << " ";

            // If you don't know ascii value
            // cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }

    // A B C
    // A B C
    // A B C

    cout << endl << "Char Square-2: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // cout << char(64 + j) << " ";
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }

    // A B C
    // B C D
    // C D E
    cout << endl << "Char Square-3: " << endl;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j++) {
            // cout << char(64 + j + i - 1) << " ";
            cout << char('A' + j + i - 2) << " ";
        }
        cout << endl;
    }

    return 0;
}
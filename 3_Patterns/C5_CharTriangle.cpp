#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    // A
    // B B
    // C C C
    cout << "Char Triangle-1: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // cout << char(64 + i) << " ";
            cout << char('A' + i - 1) << " ";
        }
        cout<< endl;
    }

    // A
    // B C
    // D E F
    // G H I F
    
    cout << endl << "Char Triangle-2: " << endl;
    int start = 65;
    char start1 = 'A';
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= i; j ++) {
            // cout << char(start) << " ";
            cout << start1 << " ";
            start1++;
        }
        cout << endl;
    }

    cout << endl << "Char Triangle-3: " << endl;
    // A
    // B C
    // C D E
    // D E F G
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char(64 + i + j - 1) << " ";
        }
        cout << endl;
    }

    cout << endl << "Char Triangle-4: " << endl;

    // D
    // C D
    // B C D
    // A B C D

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i + 1; j++) {
            // cout << char(64 + i + j - 1) << " ";
            cout << char('A' + i + j - 2) << " ";
        }
        cout << endl; 
    }

    for (int i = 1; i <= n; i++) {
        int start = 'A' + n - i;
        for (int j = 1; j <= i; j++) {
            cout << char(start) << " ";
            start++;
        }
        cout << endl; 
    }
    return 0;
}


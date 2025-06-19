#include<iostream>
using namespace std;


int main() {

    int n;
    cout << "\nEnter size: ";
    cin >> n;

    // 1 1 1 1
    // 2 2 2 2 
    // 3 3 3 3
    // 4 4 4 4

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    // 1 2 3 4
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 4 3 2 1  
    // 4 3 2 1 
    // 4 3 2 1
    // 4 3 2 1

    for (int i = 1; i <= n; i++) {
        for (int j = 5; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 1  2  3  4
    // 5  6  7  8
    // 9 10 11 12
    // 13 14 15 16

    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}
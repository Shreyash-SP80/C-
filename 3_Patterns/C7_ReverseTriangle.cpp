#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Reverse triangle-1: " << endl;
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4     4 3 2 1
    // 1 2 3         3 2 1
    // 1 2             2 1
    // 1                 1

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << " " << j;
        }

        
        for (int k = 1; k <= 2*(i-1); k++) {
                cout << "  ";
        }
        for (int q = n - i + 1; q >= 1; q--) {
            cout << " " << q;
        }
        cout << endl;
    }
}
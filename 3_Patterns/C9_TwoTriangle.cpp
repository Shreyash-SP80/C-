#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    //       1
    //     2 2
    //   3 3 3
    // 4 4 4 4

    for (int i = 1; i <= n; i++) {
        for (int k = i; k > 1; k--) 
            cout << "  ";
        for (int j = 1; j <= n - i + 1; j++) 
            cout << " " << i;
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) 
            cout << "  ";
        for (int j = i; j >= 1; j--) 
            cout << " " << i;
        cout << endl;
    }
}
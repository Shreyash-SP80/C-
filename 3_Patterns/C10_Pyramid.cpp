#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        // 3rd triangle
        for (int p = i-1; p >= 1; p--) {
            cout << " " << p;
        }   
       
        cout << endl;
    }
}
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Reverse triangle right-1: " << endl;
    // * * * *
    //   * * *
    //     * *
    //       * 

    for (int i = 1; i <= n; i++) {
        for (int k = i; k > 1 ; k--) {
            cout << "  ";
        }
        for (int j = 1; j <= n - i + 1; j++) {
            cout << " *";
        }
        cout << endl;
    }

     cout << endl << "Reverse triangle right-2: " << endl;
     // 1 2 3 4
     //   2 3 4
     //     3 4
     //       4

     for (int i = 1; i <= n; i++) {
        for (int k = i; k > 1; k--) {
            cout << "  ";
        }
        for (int j = 1; j <= n - i + 1; j++) {
            cout << " " << (i + j - 1);
        }
        cout << endl;
     }

}
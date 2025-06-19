#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;


    cout << "Star triangle right-1 " << endl;
    
    //       *
    //     * *
    //   * * *
    // * * * *

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << " *";
        }
        cout << endl;
    }

    cout << "Number triangle right-2 " << endl;

    int start = 1;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << " " << start++ ;
        }
        cout << endl;
    }
    return 0;
}
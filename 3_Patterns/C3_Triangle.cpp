#include<iostream>
#include <cmath>
#include<string>
using namespace std;


int main() {
    // *
    // * *
    // * * *
    // * * * *

    int n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Start Triangle-1: " << endl;

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // for(int i=1; i<=5; i++, cout<<"\n") 
    // for(int j=1; j<=i; cout<<"* ", j++);

    // for(int i = 1; i <= n; i++) {
    //     cout << string(i, '*') << '\n';
    // }


    cout << endl << "Number Triangle-2: " << endl;

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl << "Number Triangle-3: " << endl;

    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << cnt << " ";
            cnt ++;
        }
        cout << endl;
    }


    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    cout << endl << "Number Triangle-4: " << endl;

    for (int i = 1; i <= n; i++) {
        int row = i;
        for (int j = 1; j <= i; j++) {
            cout << row << " ";
            row ++;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << (i + j - 1) << " "; 
        }
        cout << endl;
    }

    cout << endl << "Number Triangle-5: " << endl;

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }


}
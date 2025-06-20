#include<iostream>
#include<cmath>
using namespace std;

// Key Observations
//  1. Binary Representation:
//     - Powers of 2 have exactly one 1 bit in binary.
//          Example:
//              2 = 10
//              4 = 100
//              8 = 1000

//  2. Bitwise Property:
//      - If n is a power of 2, then n & (n - 1) == 0.
//        Example:
//          8 = 1000
//          8 − 1 = 7 = 0111
//          1000 & 0111 = 0000

//  3. Edge Case:
//      - n must be > 0 (since 0 is not a power of 2).

bool isPower2(int num) {
    return ((num > 0) && (num & (num - 1)) == 0);
}

bool ispower2(int num) {
    for (int i = 0; i <= 30; i++) {
        int ans = pow(2, i);

        // Find power and check number (which is also power)
        // i.e Ex. num = 16  when loop is at i = 4 and find the power 2 ^ 4 = 16 and num is also 16 then it can return trun
        if ( ans == num ) {
            return true;
        }
    }
    return false;
}

int main() {

    int num;
    cout << "Enter any number: ";
    cin >> num;

    cout << num << " is power of 2: " << isPower2(num) << endl;
    cout << num << " is power of 2: " << ispower2(num) << endl;

    return 0;
}
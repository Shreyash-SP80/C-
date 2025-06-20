#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// = Binary to Decimal Conversion Logic Explained
//   - The process of converting a binary (base-2) number to decimal (base-10) involves 
//     multiplying each binary digit by its corresponding power of 2 and summing up the results.

// = Step-by-Step Logic
// 1. Start from the Rightmost Digit (LSB - Least Significant Bit)
//    - Each digit represents a power of 2, starting from 2^0 (rightmost bit).
//    - Move left → increase the power by 1 each time.

// 2. Multiply Each Binary Digit by 2^position
//    - If the bit is 1, include its value.
//    - If the bit is 0, skip it (since 0 x 2^n = 0).

// 3. Sum All the Results
//    - Add all the computed values to get the final decimal number.

// Example: Convert 1101 (Binary) to Decimal
//   Bit Position (Right to Left)	Binary Digit	Calculation (bit × 2^pos) 	Value
//      0 (rightmost)                   1              1 x 2^0 = 1                1
//      1                               0              0 x 2^1 = 0                0
//      2                               1              1 x 2^2 = 4                4
//      3 (leftmost)                    1              1 x 2^3 = 8                8

// Sum of values: 8 + 4 + 0 + 1 = 13
// Decimal of 1101 = 13 ✅

// = Why Does This Work?
//   - Binary is a positional number system, where each digit's value depends on its position.
//   - The rightmost bit is the least significant bit (LSB) (2^0 = 1).
//   - The leftmost bit is the most significant bit (MSB) (highest power of 2).

int  BinaryToDecimal(string b) {
    int decimal = 0;
    int power = 0;

    for (int i = b.length() - 1; i >= 0; i--) {
        if (b[i] == '1') {
            // decimal += (1 << power);  // i.e 2^power
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}


// In case of int
// n % 10 get last number
// n / 10 remove last number
int  BinaryToDec(int n) {

    int i = 0;
    int ans = 0;
    while (n != 0) {
        int digit = n % 10;

        if (digit == 1) {
           ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    return ans;
}

int  main() {
    string binary;

    cout << "Enter binary to convert to decimal: ";
    cin >> binary;

    cout << "Decimal number: " << BinaryToDecimal(binary) << endl;

    int ibinary;
    cout << "Enter binary format to convert decimal: ";
    cin >> ibinary;

    cout << "Decimal Format: " << BinaryToDec(ibinary) << endl;

    return 0;
}
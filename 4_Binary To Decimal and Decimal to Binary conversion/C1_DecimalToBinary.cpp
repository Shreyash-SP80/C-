#include<iostream>
#include<cmath>
using namespace std;

// = Decimal to Binary Conversion Logic Explained
//  - The process of converting a decimal (base-10) number to binary (base-2) involves repeatedly dividing 
//    the number by 2 and recording the remainders. The binary number is formed by reading the remainders in reverse order.

// = Step-by-Step Logic
//  1. Divide the number by 2
//     Record the quotient (result of division)
//     Record the remainder (0 or 1)
//  2. Repeat the division
//     Take the quotient from the previous step and divide it by 2 again.
//     Continue until the quotient becomes 0.
//  3. Read remainders in reverse order
//     The first remainder is the least significant bit (LSB).
//     The last remainder is the most significant bit (MSB).

// = Example: Convert 13 (Decimal) to Binary
//      Step	Division (n / 2)	Quotient	Remainder
//        1	        13 / 2	            6	        1
//        2	        6 / 2	            3	        0
//        3	        3 / 2	            1	        1
//        4	        1 / 2	            0	        1

// Remainders collected: 1 → 0 → 1 → 1
// Reverse order: 1 1 0 1
// Binary of 13: 1101 ✅

// = Why Does This Work
//   Binary is base-2, meaning each digit represents a power of 2.
//   By repeatedly dividing by 2, we extract each binary digit (bit) from the least significant to the most significant.
//   Reversing the remainders gives the correct order.



string ToBinary(int n) {
    if (n == 0) return "0";

    string binary;
    while (n > 0) {
        // cout << "Binary: " << binary << endl;
        binary = ((n % 2)? "1" :"0") + binary;
        n = n / 2;
        // cout << "n= " << n << endl;
    }
    return binary;
}

int  declToBinary(int num) {
    int ans = 0;
    int multiplier = 1;
    while (num != 0) {
        int bit = num & 1;
        num = num >> 1;

        ans = (bit * multiplier) + ans;  // Changed formula
        multiplier *= 10;
        
    }
    return ans;
}

int main() {
    int num;

    cout << "Enter decimal number to convert to binary: ";
    cin >> num;

    cout << "Binary conversion: " << ToBinary(num) << endl;
    cout << "Binary conversion (INT): " << declToBinary(num) << endl; 
    return 0;
}

// Output:
// Enter decimal number to convert to binary: 5
// Binary conversion: 101
// Binary conversion (INT): 101
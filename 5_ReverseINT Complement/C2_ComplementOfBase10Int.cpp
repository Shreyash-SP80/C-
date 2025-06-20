#include<iostream>
#include<cmath>
using namespace std;

// In 1st Approach we can just convert number in binary representation and after converting again convert it into decimal 
//  and convert in such way calculate value in case of bit 0
int  Complement1(int num) {

    // edge case
    if (num == 0) return 1;

    int ans = 0;
    int multiplier = 1;
    while (num != 0) {
        int bit = num & 1;
        num = num >> 1;

        ans = (bit * multiplier) + ans;  // Changed formula
        multiplier *= 10;
    }

    int i = 0;
    int result = 0;
    while (ans != 0) {
        int digit = ans % 10;
        if (!digit) {
            result += pow(2, i);
        }
        i++;
        ans /= 10;
    }
    
    return result;
}

// In 2nd Approach
//  - To find the complement of a base 10 integer, we need to flip all the bits in its binary representation 
//    (change 0 to 1 and 1 to 0) and then convert it back to a decimal number.

// Key Steps:
//  1. Find the number of bits in the binary representation of the given number.
//  2. Compute a bitmask with all 1s of the same length as the number.
//  3. XOR the number with the bitmask to flip all its bits (this gives the complement).

// Example:
// Input: 5 (Binary: 101)
// Number of bits: 3
// Bitmask: 111 (which is 7 in decimal)
// XOR: 5 ^ 7 = 2 (Binary: 010)
// Output: 2

int  Complement2(int num) {
    
    int mask = 0;

    // edge case 
    if (num == 0) return 1;
    while (mask < num) {
        mask = (mask << 1) | 1;   // Wroks on bit E
        // Ex 1st case   
        // mask << 1   i.e 0000 (initial 0)
        // | 1    i.e 0001 (1 decimal)
        // 1 < 5 ✅ (mask < num)

        // 2nd case
        // mask << 1   i.e 0010
        // | 1     i.e 0011 (3 decimal)
        // 3 < 5 ✅

        // 3rd case 
        // mask << 1   i.e 0110
        // | 1   i.e 0111 (7 Decimal)
        // 7 < 5 ❌
     }

    return num ^ mask;

    // OR
    // return (~num) & mask   // i.e   Ex num = 5 (101)  ~(num) = 010  & 111  i.e 010 = 2
    // Ex num = 10 (1010)   ~(num) = 0101 & 1111  i.e  0101 = 5
}

int  main() {
    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Complement of " << num << " is: " << Complement1(num) << endl;

    cout << "Complement of " << num << " is: " << Complement2(num) << endl;

    return 0;

}
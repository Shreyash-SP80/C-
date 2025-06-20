#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

// = Approach:
//  1. Initialize a variable (reversed) to store the reversed number (start with 0).
//  2. Loop while the original number (n) is not zero:
//      Extract the last digit of n using n % 10.
//      Update the reversed number by multiplying it by 10 (to shift digits left) and adding the extracted digit.
//      Remove the last digit from n using n / 10.
//  3. Handle overflow: Ensure the reversed number does not exceed the 32-bit signed integer range (INT_MAX or INT_MIN).

int reverse(int num) {

    bool isnegative = num < 0;

    if (isnegative) {
        // num = abs(num);
        num = -num;
        // num = -1 * num;
    }
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;
        num /= 10; 

        // if (rev > pow(2, 32) / 10 || rev < -pow(2, 32) / 10) 
        //     return 0;

        // OR  

        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) 
            return 0;

        rev = rev * 10 + digit;
    }
    return (isnegative)? -rev : rev;

}

int main() {
    int num;
    cout << "Enter any number: "; 
    cin >> num;

    cout << "Reverse Number: " << reverse(num);
    return 0;
}

// Output:
// Enter any number: 123
// Reverse Number: 321

// Enter any number: -123
// Reverse Number: -321

// Enter any number: 1534236469  (Overflow Condition)
// Reverse Number: 0
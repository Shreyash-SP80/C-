
#include<iostream>
#include<string>
using namespace std;

// User input:
// - In C++, there are several ways to take input from the user. 
// - The most common methods use the cin object from the <iostream> library.

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;  // Takes integer input
    cout << "Your age is: " << age << endl;

    
    // Multiple inputs:
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;  // Takes two inputs separated by space/enter

    // String Input
    // There are two main ways to take string input:

    // 1. Using cin (stops at whitespace)
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Will only take first word (stops at space)

    // 2. Using getline() (takes entire line)
    string fullName;
    cout << "Enter your full name: ";
    cin.ignore();  // Clears input buffer if needed
    getline(cin, fullName);  // Takes entire line including spaces


    // Buffer Problem
    // When mixing cin >> and getline(), the newline character might remain in the buffer.

    int num;
    string text;

    cout << "Enter a number: ";
    cin >> num;
    cin.ignore();  // Clear the newline character
    cout << "Enter text: ";
    getline(cin, text);
    return 0;
}
#include<iostream>
using namespace std;

// Immediately Invoked Lambda (IIFE)
//   - Execute a lambda right after defining it.

//  - Noramal function needs an seperate defination so that this can do with lambda
int main() {
    []() {
        cout << "Hello, I am IIFE" << endl;
    }();   // Hello, I am IIFE

    int x = []() {
        int a = 5, b = 10;  // Complex logic
        return a * b;
    }();  // x = 50
    cout << x << endl;
}
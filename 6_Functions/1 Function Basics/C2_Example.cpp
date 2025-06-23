#include<iostream>
using namespace std;

int  add(int, int);   // Function Declaration 

int  sub(int a, int b) {   // No need of function declaration directly define 
    return a - b;
}

int main() {

    int result = add(10, 20);  // returned value assigned to variable
    cout << result << endl;  // 30

    cout << sub(20, 10);  // 10  returned value printed

    return 0;
}

int  add(int a, int b) {  // Function defination
    return a+b;
}
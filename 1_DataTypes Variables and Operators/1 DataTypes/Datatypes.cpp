#include<iostream>
#include<typeinfo>
using namespace std;

// DataTypes:
//  - Data types in C++ define the type of data that a variable can hold.
//  - They determine the size of memory allocated, the range of values that can be stored, 
//     and the operations that can be performed on the variable.


// 1. Primitive Data Types

// = Integer Types:
//   - int: Typically 4 bytes (32-bit), stores whole numbers
int a;

// = How negative number stored in memory
// -5
// Converted in to bytes 0000 0101
// Then take 1's complement  1111 1010
// Then take 2's complement  1111 1011   (2's complement means add 1 in 1's complement)

// How value retrived
// Take 1's complement  0000 0100
// Take 2's complement  0000 0101

//   - short: 2 bytes (16-bit), smaller range than int
int* ptr1 = nullptr;

//   - long: At least 4 bytes (size varies by system)
long int a1;

//   - long long: At least 8 bytes (64-bit)
long long int a2;

//   - signed: Can store negative values
signed int a3;

//   - unsigned variants: Only positive numbers (e.g., unsigned int)
unsigned int a4;


// = Floating-Point Types:
//   - float: 4 bytes, single-precision floating point
//   - double: 8 bytes, double-precision floating point
//   - long double: Typically 10-16 bytes, extended precision

// = Character Types:
//   - char: 1 byte, stores single character/ASCII value

// = Boolean Type:
//   - bool: Stores true or false (1 byte)



// 2. Void Type
//  - void: Represents absence of type (used for functions that don't return values)



// 3. Derived Data Types

// 1. Arrays
//   - Collection of elements of the same type:
int numbers[5] = {10, 20, 30, 40}; // Array of 5 integers


// 2. Pointers
//   - Variables that store memory addresses:
int* ptr; // Pointer to an integer (Pointers can stores the address of the variables)


// 3. References
//   - Alias for another variable (Copy of the another variable):
int x = 10;
int& ref = x; // ref is a reference to x (ref actual points to x)



// 4.  User-Defined Data Types

// 1. Structures (struct)
//   - Groups different data types together:
struct Person {
    string name;
    int age;
    float height;
};


// 2. Classes (class)
//   - Similar to structures but with access control:
class Car {
private:
    string model;
public:
    void setModel(string m) { model = m; }
};


// 3. Typedef
//   - Creates an alias for a type:

//      typedef int Integer;
//      Integer x = 5; // Same as int x = 5


// 4. Unions (union)
// Similar to struct but members share the same memory location:
union Data {
    int i;
    float f;
    char c;
};


// Null Pointer Constant
int* ptr2 = nullptr;


int main() { // <= Start point of program

    int a = 10; // Integer
    cout << "sizeof int: " << sizeof(a) << endl;   // sizeof int: 4
    cout << typeid(a).name() << endl;   // i (int) must include #include<typeinfo>

    short a1 = 10;  // short
    cout << "sizeof short: " << sizeof(a1) << endl;  // sizeof short: 2
    cout << typeid(a1).name() << endl; // s

    long int a2 = 1000000;      // long
    cout << "sizeof long: " << sizeof(a2) << endl;  // sizeof long: 4
    cout << typeid(a2).name() << endl;  // l

    // In this way we can check other variables



    return 0; // <= End of program
}
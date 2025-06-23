#include<iostream>
using namespace std;

// = Capture Clauses ([ ]) 
//  - Capture clauses in lambda functions ([...]) define how the lambda accesses variables from its surrounding scope.
//  - They are essential because lambdas are isolated by default and cannot directly use external variables unless explicitly captured.

// = Types of Capture Clauses
//      Capture Syntax	     Meaning	                                         Example
//        []	                Captures nothing (default)	                        []() { cout << "Hello"; }
//        [x]	                Captures x by value (copy)	                        [x]() { cout << x; }
//        [&x]	                Captures x by reference	                            [&x]() { x = 42; }
//        [=]	                Captures all variables by value	                    [=]() { cout << x + y; }
//        [&]	                Captures all variables by reference	                [&]() { x++; y++; }
//      [this]	                Captures the current class object (*this)	        [this]() { cout << data; }
//      [*this] (C++17)	        Captures a copy of the class object	                [*this]() { ... }


int  main() {
    int a = 100;

    // = issue (Default)
    //   - Lambdas Are Self-Contained
    //   - By default, a lambda cannot access variables outside its own scope.
    //   - Example: This fails to compile because x is not captured:

    // auto sum = []() {
        // cout << a << endl;  // Here a can not be accessed because bydefault they can not access to solve this we can use []
    // };

    // = Control Over Variable Access
    //   - Capture clauses let you decide:
    //          Should the lambda copy a variable ([x])?
    //          Should it modify the original ([&x])?
    //          Should it capture everything by value ([=]) or reference ([&])?

    // [x] 
    auto sum = [a]() {
        cout << a << endl;
        // a += 200;  // Gives an error because it allows read only
    };
    a = 200;  // Can not changed sum() can top a
    sum();    // 100 (Printed)

    
    // [&x] 
    auto sum1 = [&a]() {     // [a] then it can access 200 because value updated
        cout << a << endl;   // 200
        a += 50;   // here we can change the value
    };
    sum1();
    cout << a << endl;   // 250 value changed because variable access by reference


    // [=] Access all the variables by value
    int b = 20;
    int c = 10;

    auto sum2 = [=]() {
        cout << a << endl;    // 250
        cout << b << endl;    // 20
        cout << c << endl;    // 10

        // b += 10;   // but can not modify
    };
    sum2();


    // [&] Access all variables by reference (heance we can update)
    auto sum3 = [&]() {
        cout << a << endl;  // 250
        cout << b << endl;  // 20
        cout << c << endl;  // 10

        a += 10;
        b += 10;
        c += 10;
    };
    sum3();
    cout << a << endl;   // 260
    cout << b << endl;   // 30
    cout << c << endl;   // 20




    // = Mixed Captures
    //   Combine specific captures with [=, &x] or [&, x].
    int x = 10, y = 20;
    auto lambda = [=, &x]() { 
        x++; // Modifies 'x' by reference (only)
        cout << y << endl; // 'y' captured by value
    };
    lambda();
    cout << x; // 11 (modified)

    
    return 0;
}
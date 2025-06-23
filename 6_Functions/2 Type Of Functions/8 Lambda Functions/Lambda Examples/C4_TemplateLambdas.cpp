#include<iostream>
using namespace std;

// = Template Lambdas (C++20)
//   - Explicit template syntax (more control than auto).

int main() {
    auto print = []<typename T>(T value) {   // Like an auto
        cout << value << endl;
    };
    print(42);       // int
    print("Hello");  // const char*
    return 0;
}
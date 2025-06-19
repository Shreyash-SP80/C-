#include<iostream>
using namespace std;

namespace Accv {
    int namescope = 1000;
}
int globalvar = 100;

class  ShowClassScope {
    public:
        int num;
};

void  FunctionScope(int funvar) {  // funvar Function Parameter scope
    cout << "Funtion parameter: "<< funvar << endl;
}

int main() {
    int x = 10; // Local to main() Accessed with in the main

    if (true) {
        int a = 200; // local variable local to if Do not accessed outside
        cout << x;   // 10
    }

    // cout << a; // we get an error

    // Accessing class scope variable by creating object
    ShowClassScope obj;
    obj.num = 2000;
    cout << "Class var: " << obj.num << endl; // Class var: 2000


    // Function Parameter scope
    FunctionScope(5000);
    // cout << funvar; // get an error because this is function scope


    // Accesing namespace
    cout << Accv::namescope << endl;  // 1000

    // Golbal variable
    cout << ::globalvar << endl; // 100  Use :: scope resolution operator to access golbal varible It is useful when local var and global var name same

    
}



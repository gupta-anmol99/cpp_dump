// In this tutorial we will learn about initialization
// list in constructors

/*

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/

#include<iostream>
#include<string>

using namespace std;

class Test{
    int a, b;

    public:
        Test(int i, int j) : a(i), b(j)
        /*
        Test(int i, int j) : a(i), b(i+j) <-- Correct
        Test(int i, int j) : a(i), b(a+j) <-- Correct
        Test(int i, int j) : b(j), a(i+b) <-- This will give wrong answer. Since
                                              a is written first, it will initialize
                                              first and hence wrong value.
        */
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main() {
    Test t(4, 6);
    return 0;
}
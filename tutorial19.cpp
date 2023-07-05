// In this tutorial we will learn to solve ambiguity 
// in inheritence. For example, let's say you have a 
// function of same name in multiple base classes. When
// you call the function, which function should invoke.

#include<iostream>
#include<string>

using namespace std;

class B1{
    public:
        void greet(){
            cout<<"Hello!";
        }
};

class B2{
    public:
        void greet(){
            cout<<"Good Evening!";
    }
};

// Now if we want use greet function with an object of D class, 
// We will have to specify it inside the class D.

class D: public B1, public B2{
    int a;
    public:
        D(){a = 0;}

        // Syntax for ambiguity resolution
        void greet(){
        B2 :: greet();
        }
};

int main (){
    D d;
    d.greet();
    return 0;
}

// Note that if we make a member function in the derived class
// with the same name as a function of the base class, then the 
// the function in the derived class takes precedence.

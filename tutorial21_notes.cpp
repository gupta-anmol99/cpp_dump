// In this tutorial we will learn about constructors
// in derived classes.

// First let's revisit constructors

#include<iostream>
#include<string>

using namespace std;

// This Example class is written to just go through
// the basics of Constructors

class Example{
    int a,b;

    public:
        Example(){a = 0; b = 0;} // <-- Default Constructor
        Example(int x, int y){  // <-- Parameterized Constructor
            a = x;
            b = y;
        }

        void getData(){
            cout<<"a is: "<<a<<" & b is: "<<b<<endl;
        }
};


int main() {
    Example ex1;
    Example ex2(3, 5);

    cout<<"Value of ex1 is "<<endl;
    ex1.getData();

    cout<<"Value of ex2 is "<<endl;
    ex2.getData();
    
    return 0;
}

/*
Let's get into constructors for derived class.
You should remember following points - 

1. If base class contructors have no argument, then there is no need
   for constructor in derived class to set those values.
2. If there are arguments in the base class constructor, then the
   derived class have to pass those arguments to the base class constructor.
3. If both base class and derived class have constructor, then the 
   base class constructor is executed first.

*/

/*
In case of multiple inheritences - the constructor for the class which 
is declared first while making the derived class is exectuted first.
For example, in the code - 

class Derived : public Base1, Base2{
    .....
};

Constructor for class Base1 will execute before class Base 1.

*/

// In case of multilevel inheritences, the constructors are executed 
// in order of inheritences.

// Note - Virtual class constructor is always invoked first.


// -------------------------------------------------------------------------

/*
So in summary - 

Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

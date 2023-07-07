// In this tutorial we will learn about polymorphism and
// pointers to derived class.

/*

Polymorphism means different forms of same thing. 

There are two kinds of polymorphism in C++ -
    1. Compile Time Polymorphism --> In this kind of polymorphism
        it is already known which function will run. It as also
        called early binding. There are two types of compile time
        polymorphism -
            - Function Overloading - Remember we made same name functions with diff args?
            - Operator Overloading

    2. Run Time Polymorphism --> In this case, the compiler doesn't know
        which function will be called. It is also called late binding and
        is slow because function calls are decided on the run time. This 
        poymorphism can be acieved using virtual function.

            - Virtual Function - A function which is declared in the 
                parent class but is redefined in the child class.

*/


// Remember, a base class pointer can point to a derived class object.
// But if you do so, then you can only access the base class members.
// You cannot access the derived class members.
// Even if you have same name function in both base and derived class,
// derived class pointer will bind to derived class function and base 
// class pointer is binded to base class fucntion.

#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};


int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;

    // base_class_pointer->var_derived= 134; // <-- Will throw an error

    base_class_pointer->display(); // <-- This will use display fn of base class

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display(); // <-- This will use display fn of base class

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display(); // <-- Will use display fn of derived class

    return 0;
}

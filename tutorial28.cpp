// In this tutorial we will learn about the virtual functinons

// Virtual functions are used when we want to use the derived class 
// members while using a base class pointer.
// To do so, we can declare the base class member function as virtual.

#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base = 1;
        // When declared virtual, it will say if my pointer point to derived object, run derived member function.
        virtual void display(){ 
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived = 2;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};


int main(){

    BaseClass * bptr;
    DerivedClass der_obj;
    BaseClass bas_obj;

    bptr = & der_obj;
    bptr->display();
    return 0;
}
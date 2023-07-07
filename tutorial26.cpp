// In this tutorial we will look into 'this' pointer.
// When we have to specify which variable the function
// is called for, then we use this pointer.

// How does this work?
/*

Read these points properly -
    1. 'this' is an inbuilt pointer that points to the object itself
    2. When you use 'this' pointer it tells the function, that is,
       this->a = a;, it means that you want to set the member data a
       of the object with value a.
    3. We can return by refernce to get the object reference.
       For example, if we have a class A -
            
            A & setData(int x){
                a = x;
                return *this;
            }
    4. We can use this to chain the functions, - a.setData(5).setData(8);
       will change the value of the object a to 5 and then to 8.

    Note - Please note that we should return by reference. If we don't return
    by value, when we do a.setData(5).setData(8), then the value will be set
    to 5, since the function returns a different object. If we return the refernce, we 
    are returning reference to the same object.

*/
#include<iostream>
#include<string>

using namespace std;

class A{
    int a;

    public:
        A setData(int a){
            this->a = a + 5; // If you remove 'this', you will get garbage value
            return *this;
            // After some processing we can return *this
        }

        void getData(){
            cout<<"val of a is "<<a<<endl;
        }
};

int main() {
    A a, b;
    b = a.setData(4);
    b.getData();
    return 0;
}
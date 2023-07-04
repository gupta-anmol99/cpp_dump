// In this tutorial we will learn about copy constructors.
// Copy constructors are used when you want to copy the data of an object
// into another object.

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    // This means that if we don't define a copy constructor, it will use its
    // default copy constructor. This can be verified by commenting out this
    // definition and then run the code. The cout string will not print
    // in that case but the object will be copied.

    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // It can be checked whether or not the copy constrcutor is invoked by
    // checking if the string is print or not.

    Number z1(z); // Copy constructor invoked because the object is created and copy constructor is invoked.
    z1.display();

    z2 = z; // Copy constructor not called because the object was created already and just the object is copied.
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}

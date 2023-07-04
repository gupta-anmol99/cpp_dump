// In this we will learn the constructor.
// Constructors are used to initialize values of objects
// automatically. It has the same name as the class and
// is invoked automatically whenever the object is created.

// Important Characteristics of Constructors in C++

// 1. A constructor should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to their address

#include <iostream>
#include <string>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // <-- Declaring Constructor
    void printNumber(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

//  Whenever object is created these values are automaticaclly set.
// Note that we don't write any return type for constructor. But if we write any
// member function, we need to define the return type.

complex ::complex(void) // <-- Default as is doesn't take any parameters.
{
    a = 2;
    b = 3;
}

int main()
{
    complex c1; // <-- All objects will have same values.
    c1.printNumber();
    return 0;
}
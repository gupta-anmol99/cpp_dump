// In this tutorial we will see parameterized constructors.

#include<iostream>
#include<string>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void printNumber(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // <-- Parameterized as is takes parameters.
{
    a = x;
    b = y;
}

int main() {
    // Implicit call
    complex c1(3, 6); 
    c1.printNumber();

    // Explicit call
    complex c2 = complex(5, 10);
    c2.printNumber();
    return 0;
}
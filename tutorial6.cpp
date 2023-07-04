// In this tutorial we will see how to pass object arguments in the functions.
// We will see how to pass objects as arguments in the functions and
// how to use the set the variables using the variables of
// other objects.

#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void complexSum(Complex o1, Complex o2);
    void displayComplex(void);
};

void Complex ::displayComplex(void)
{
    cout << "The number is " << a << " + " << b << "i" << endl;
}

void Complex ::complexSum(Complex o1, Complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.displayComplex();

    c2.setData(3, 4);
    c2.displayComplex();

    c3.complexSum(c1, c2);
    c3.displayComplex();
    return 0;
}
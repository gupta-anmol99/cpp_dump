// In previous tutorial, we understood friend functions.
// Now we will take a look into friend classes.

#include <iostream>
#include <string>

using namespace std;

class Complex; // <-- Forward Declaration to let compiler know that there is class called Complex when going through Calculator.

class Calculator
{
public:
    int add(int a, int b) { return (a + b); }
    int sumComplexPart(Complex, Complex);
    int sumRealPart(Complex, Complex);
};

class Complex
{
    int a, b;

    // Declared a function of a differnt class as friend.
    friend int Calculator ::sumRealPart(Complex, Complex);
    friend int Calculator ::sumComplexPart(Complex, Complex);

    // Now what if there are 100s of functions in a class. It will be
    // difficult to declare all the functions as friend individually.
    // So we use friend class.

    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealPart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumComplexPart(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex c1, c2;
    Calculator calc;
    c1.setNumber(2, 5);
    c1.printNumber();

    c2.setNumber(3, 6);
    c2.printNumber();

    int res_real = calc.sumRealPart(c1, c2);
    int res_complex = calc.sumComplexPart(c1, c2);
    cout << "The sum of the real parts is " << res_real << endl;
    cout << "The sum of the complex parts is " << res_complex << endl;

    return 0;
}
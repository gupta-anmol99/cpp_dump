// In this tutorial we will see a simple inhertitence example.
// We will also look into the visibility mode in inheritence.
// Study these examples properly as it might help to solidify
// older concepts also.

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    int id;
    int age;
    Employee() {} // <-- Always put the default constructor when deriving a class
    Employee(int inpID, int inpAge)
    {
        id = inpID;
        age = inpAge;
    }
    void getData(void);
};

// Derived Class syntax

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

// Visibility mode means how the inheritence take place.
// Visibility can be public or private.
// Private means that the public members of the base class will
// be private members of derived class. and Public means public
// members of base class are public members of derived class.
// Private members are never inherited. Default mode is private.

class Programmer : public Employee
{
    int language;

public:
    Programmer() {}
    Programmer(int lang, int inpID)
    {
        language = lang;
        id = inpID;
        age = 25;
    }
    void getProgInfo()
    {
        cout << "The id is " << id << " .The language is " << language << endl;
    }
};

void Employee ::getData()
{
    cout << "The ID is: " << id << " .The age is: " << age << endl;
}

int main()
{
    Employee Anmol, Ananya(3, 19);
    Anmol = Employee(2, 26);

    cout << "Using Employee member function for Employee object -" << endl;
    Anmol.getData();

    Programmer newAnmol;
    newAnmol = Programmer(4, 25);

    cout << "Using Programmer member function for Programmer object" << endl;
    newAnmol.getProgInfo();

    cout << "Using Employee member function for Programmer object" << endl;
    newAnmol.getData();
    return 0;
}
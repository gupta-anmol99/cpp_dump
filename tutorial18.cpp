// In this tutorial we will learn about multiple inheritence.

#include <iostream>
#include <string>

using namespace std;

/*
For multiple inheritence the syntax looks like -

class {{Class Name}} : {{Visibility-Mode}} {{Base Class 1}}, {{Visibility Mode}} {{Base Class 2}} {
    Code for Derived Class
};
*/

class Human
{
protected:
    int id;

public:
    void setID(int i) { id = i; }
};

class Adult
{
protected:
    int age;

public:
    void setAge(int a) { age = a; }
};

class Student : protected Human, public Adult
{
public:
    void setDetails(int, int);
    void getDetails();
};

void Student ::setDetails(int x, int y)
{
    setID(x);
    setAge(y);
}

void Student ::getDetails()
{
    cout << "The ID  is: " << id << endl;
    cout << "The age is: " << age << endl;
}


int main()
{
    Student anmol;
    anmol.setDetails(20, 25);
    anmol.getDetails();

    cout<<"After setting age using public function -"<<endl;
    anmol.setAge(32);
    anmol.getDetails();
    return 0;
}

/*

If we look at the notes of tutorial 14, we will find out that the 
Student class looks something like this - 

Data Member - 
    id --> Protected
    age --> Protected

Member Functions -
    setID --> Protected
    setAge --> Public
    setDetails --> Public
    getDetails --> Public

*/
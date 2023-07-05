// In this tutorial we will understand what is protected access.
// Let's say, in a class, you want to make a member private so other
// functions cannot access it but you want it to be inheritable.
// To do so, we use protected modifier, which is used in this tutorial

#include <iostream>
#include <string>

using namespace std;

/*
The below table shows the relation between the member of base and derivation class.

For a member in base class (rows) -

                        Public Derivation           Private Derivation            Protected Derivation
    Private Members       Not Inherited               Not Inherited                  Not Inherited
    Public Members          Public                      Private                         Protected
    Protected Members       Protected                   Private                         Protected

*/

class Base
{
    int data1;

protected:
    int data2;

public:
    void setData()
    {
        data1 = 5;
        data2 = 6;
    }
};

class Derived : protected Base
{
public:
    void setDataBase() { setData(); }
    void displayData() { cout << "The protected data is " << data2 << endl; } //<-- Can access data2.
};

int main()
{
    Derived dir;
    dir.setDataBase();
    // cout<<dir.data2;    // Will not work since data2 is protected.
    dir.displayData();
    return 0;
}
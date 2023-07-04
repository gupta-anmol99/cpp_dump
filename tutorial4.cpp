#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int id;
    int salary;
    string name;

public:
    void setID(void)
    {
        cout << "Enter name " << endl;
        cin >> name;
        cout << "Enter employee id " << endl;
        cin >> id;
        cout << "Enter employee salary " << endl;
        cin >> salary;
    }

    void getID(void)
    {
        cout << "The name is " << name << endl;
        cout << "The ID is " << id << endl;
        cout << "The salary is " << salary << endl;
    }
};

int main()
{
    // Employee Anmol, Ananya, Nidhi;

    // Anmol.setID();
    // Anmol.getID();

    // Let's say you have hundreds of employees, then we can use array.

    Employee facebook[2];

    for (int i = 0; i < 2; i++)
    {
        facebook[i].setID();
        facebook[i].getID();
    }

    return 0;
}
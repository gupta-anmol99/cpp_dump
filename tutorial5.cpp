// Let's assume you have a class employee and you want to
// keep a count of number of objects of this class. Here if you declare a
// variable inside the class then every object of that class will
// have a different count. To solve this, we declare a static variable
// which can be used commonly for all objects.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // <-- This becomes the property of class isntead of object.

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count = 5; // Default value is 0 if you don't write '= 5'

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}

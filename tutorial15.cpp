// In this tutorial we will see an example of inheritence to understand
// public and private visibility mode.
// Just remember, once you use private visibility mode, you cannot use any
// of the member functions in the main function.
// So you will have to use everything in member functions of
// derived classes.

#include <iostream>
#include <string>

using namespace std;

class Student
{
    int ID;
    int marks;

public:
    void setData(int id, int a)
    {
        ID = id;
        marks = a;
    }
    int getMarks() { return marks; }
    void displayData(void);
};

void Student ::displayData()
{
    cout << "ID of the student is " << ID << endl;
    cout << "Marks of the student is " << marks << endl;
}

class Leader : private Student
{
    int section;
    float getPrecentage();

public:
    Leader() { section = 10; }

    void setIT();
    void displayPercentage()
    {
        displayData();
        cout << "The section is " << section << endl;
        cout << "The percentage is " << getPrecentage() << endl;
    }
};

float Leader ::getPrecentage()
{
    int student_marks = getMarks();
    return (float(student_marks) * 2);
}

void Leader :: setIT(){
    int ipid, ipm;
    cout<<"Enter ID and marks of the student"<<endl;
    cin>>ipid>>ipm;
    setData(ipid, ipm);
}

int main()
{
    Leader anmol;
    anmol.setIT();

    anmol.displayPercentage();
}
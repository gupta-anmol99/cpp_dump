// In this tutorial we will look into multilevel inheritence.

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int r);
    void getRoll();
};

void Student ::setRoll(int r)
{
    roll = r;
}

void Student ::getRoll()
{
    cout << "The roll no is " << roll << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float x, float y)
{
    maths = x;
    physics = y;
}

void Exam ::get_marks()
{
    cout << "Maths: " << maths << endl;
    cout << "Physics: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        getRoll();
        get_marks();
        cout << "Your result is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.setRoll(20);
    harry.set_marks(94.0, 90.0);
    harry.displayResult();
    return 0;
}
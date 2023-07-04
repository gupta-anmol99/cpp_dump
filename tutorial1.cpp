#include<iostream>

using namespace std;

// We use classes instead of structure because there is no data hiding.
// Also we cannot define functions in structure.

class Employee{
    private:
        float salary;
        int id;
    public:
        int car, age;
        void setData(float x, int y);  // <-- Declaration
        void getData(){
            cout<<"Salary is "<<salary<<endl;
            cout<<"ID is "<<id<<endl;
            cout<<"Car is "<<car<<endl;
            cout<<"Age is "<<age<<endl;            
        }
};

void Employee :: setData(float x, int y)   // <-- defining a class function
{    
    salary = x;
    id = y;
}

int main() {
    Employee anmol;
    anmol.car = 2;
    anmol.age = 24;
    anmol.setData(22.4, 32);
    anmol.getData();
    return 0;
}
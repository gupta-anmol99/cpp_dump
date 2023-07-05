// In this tutorial, we will learn about virtual base class.

// Let's say you have a class A which have int a. From A you derived 
//class B and class C. Now, you create a class D which is derived from
// class B and class C. Observe that, since class B and C are both 
// derived from A, both will inherit int a. Since, D is derived
// from B and D, it will have two int a. We use virtual classs
// to prevent this ambiguity and duplication. Virtual class will
// prevent the flow of duplicate members in the inheritence.

/*
Syntax - 

When you make B and C, declare A as virtual class.

class B : virtual public A{
    .....
};

class C : virtual public A{
    .....
};

*/

#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
        int roll;

    public:
        void setRoll(int a){roll = a;}
        void displayRoll(){
            cout<<"Roll number is: "<<roll<<endl;
        }
};

class Test : virtual public Student{
    protected:
        int math, physics;
    
    public:
        void setMarks(int, int);
        void displayMarks(){
            cout<<"Math: "<<math<<endl;
            cout<<"Physics: "<<physics<<endl;
        }
};

void Test :: setMarks(int x, int y){
    math = x;
    physics = y;
}

class Sport : virtual public Student {
    protected:
        int score;

    public:
        void setScore(int sc){
            score =sc;
        }
        void displayScore(){
            cout<<"Score is: "<<score<<endl;
        }
};

class Result : public Sport, public Test{
    int total;

    public:
        void displayResult(){
            displayRoll();
            displayMarks();
            displayScore();
            total = math+physics+score;
            cout<<"Total result of student is: "<<total<<endl;
        }
};

int main() {
    Result r;
    r.setRoll(12);
    r.setMarks(98, 100);
    r.setScore(92);
    r.displayResult();
    return 0;
}
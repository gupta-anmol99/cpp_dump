// In this tutorial we will practice virtual functions.

#include<iostream>
#include<string>

using namespace std;


class Robotics{
    protected:
        string name;
        int x;
        int y;

    public:
        Robotics(string s, int pos1, int pos2){
            name = s;
            x = pos1;
            y = pos2;
        }       
        virtual void display(){}
};

class Vision : public Robotics{
    protected:
        char direction;

    public:
        Vision(string a, int dir1, int dir2, char dir) : Robotics(a,dir1,dir2){
            direction = dir;
        }
        void display();
};

void Vision :: display(){
    cout<<"The name of robot is "<<name<<endl;
    cout<<"Position of the robot is ("<<x<<", "<<y<<")"<<endl;
    cout<<"Vision direction is "<<direction<<endl;
}

class Learning : public Robotics{
    protected:
        int model;
        float accuracy;

    public:
        Learning(string s, int dir1, int dir2, int m, float acc) : Robotics(s, dir1, dir2){
            model = m;
            accuracy = acc;
        }

        void display();
};

void Learning :: display(){
    cout<<"Name of the robot is "<<name<<endl;
    cout<<"Model used is "<<model<<endl;
    cout<<"Accuracy is "<<accuracy<<endl;

}


int main() {
    string name = "Garuda";
    int x, y, model;
    char dir;
    float acc;

    x = 4; y = 6; model = 3; 
    dir = 's';
    acc = 99.4;

    Vision perc(name, x, y, dir); 
    Learning ml(name, x, y, model, acc);

    Robotics * robot[2];

    robot[0] = &perc;
    robot[1] = &ml;

    robot[0]->display();

    cout<<endl;

    robot[1]->display();

    cout<<endl;

    // We can also define a Robotics pointer for Learning object.
    Robotics * robo = new Learning(name, 3,4,1,43.6);

    robo->display();


    return 0;
}
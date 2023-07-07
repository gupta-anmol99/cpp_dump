// In this tutorial we will learn about abstract base classes 
// & pure virtual functions
/*
Abstract base classes are literally the classes which are 
made just for inheritences. We cannot create onjects of abstract
base classes.

For example, imagine you are creating code that requires registration
of all citizens of a nation. The first thing you need is a base class
Human. All the the citizens will be Humans. So you will create an abstract
bsae class and then create several derived classes.

To make an abstract base class, we must have at least 1 'Pure virtual
function'. Pure virtual function does nothing. It just says that you
will have to (read must) define the fucntion in the inherited class.

Pure virtual function is defined as - 

    virtual {{type}} func1(args) = 0;

*/

// Taking the code from the previous tutorial - 

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
        virtual void display() = 0; // <-- Pure virtual function.
        // Every inherited class must define display in their scopre.
};

int main() {
    
    return 0;
}


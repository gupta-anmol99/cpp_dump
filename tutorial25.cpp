// In this tutorial we will learn about how to make pointer
// for objects and array of objects. Also we will see the use 
// of 'arrow' operator.

#include<iostream>
#include<string>

using namespace std;

class Complex{
    int real, imaginary;

    public:
        void setData(int a, int  b){
            real = a;
            imaginary = b;
        }

        void getData(){
            cout<<"The complex number is: "<<real<<" + i"<<imaginary<<endl;
        }
};

int main() {
    
    // First we will create an object using 'new' keyword.
    // Here ptr will store the address to a Complex object.
    Complex *ptr = new Complex;

    // Old method
    (*ptr).setData(2,3);
    (*ptr).getData();

    // New method using arror operator
    Complex *ptrNew = new Complex;

    ptrNew -> setData(4,2);
    ptrNew -> getData();

    // The -> operator means, derefrence the pointer and use the function.

    // Now we will create an array of obejcts-

    Complex *ptr1 = new Complex[4];
    Complex *ptrTemp = ptr1;

    for (int i = 0; i < 4; i++)
    {
        ptr1->setData(3,4);
        ptr1++;
    }

    
    for (int j = 0; j < 4; j++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
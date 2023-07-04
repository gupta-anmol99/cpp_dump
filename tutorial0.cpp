#include<iostream>

using namespace std;


// This will not swap the values
// When we called this function, the actual variables copied here and
// then they were swapped which didn't change the actual variables.
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// This will swap the values 
// What we did is basically used address of the actual variables as arguments. So 
// when we called the function, it swaped the values in those adresses.
void swapPointer(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This will swap the values again
// Here we will use the C++ reference variables. Reference variables
// point to a particular variable. That is it becomes the same name of
// the same variable.

void swapRefVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;   // <-- Actual Variables
    x = 1;
    y = 3;
    cout<<"Actual value of x is "<<x<<" and actual value of y is "<<y<<endl;

    // swap(x, y);     // <-- Will not work
    // cout<<"Using value; x is "<<x<<" and  y is "<<y<<endl;

    // swapPointer(&x, &y);    // <-- Will work
    // cout<<"Using Pointer; x is "<<x<<" and y is "<<y<<endl;

    swapRefVar(x, y);     // <-- Will work
    cout<<"Using reference variable; x is "<<x<<" and y is "<<y<<endl;

    return 0;
}
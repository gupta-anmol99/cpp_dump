// We will look into pointer for objects in upcoming
// tutorials. So in this tutorial we will just revisit 
// pointers to see how they work.

#include<iostream>
#include<string>

using namespace std;

int main() {
    int a, *b, **c;

    a = 36;
    b = &a; // <-- Stored address of a at b.
    c = &b; // <-- Stored address of b at c.
    cout<<"Number in a is: "<<a<<endl;
    cout<<"Number in b which is address of a is: "<<b<<endl;
    cout<<"Number in c which is address of b is: "<<c<<endl;

    // *b will give the value stored in the address at b (which is 36).
    cout<<"The value of *b is : "<<*b<<endl;

    // *c will give the value stored in the address at c (which is address of a).
    cout<<"The value of *c is: "<<*c<<endl;

    // **c will give the value stored in the address of the address at c (which is 36).
    cout<<"The value of **c is: "<<**c<<endl;

    // Pointer in array
    int *ptr;
    int marks[4] = {2,5,7,1};
    ptr = marks; // <-- marks (name of array) gives address to the first block.

    cout<<"The first element of array is: "<<*ptr<<endl;

    // Pointer arithmetic
    cout<<"The second element of array is: "<<*(ptr+1)<<endl;
    cout<<"The third element of array is: "<<*(ptr+2)<<endl;
    cout<<"The fourth element of array is: "<<*(ptr+3)<<endl;

    return 0;
}
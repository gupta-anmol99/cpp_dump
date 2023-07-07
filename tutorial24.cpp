// In this tutorial we will learn about pointers in classes
// and objects. We can use 'new' keyword for dynamic allocation
// of pointers for vaiable and block of data. 
// 'delete' keyword is used to delete a dynamically allocated memory.

#include<iostream>
#include<string>

using namespace std;

int main() {

    // new operator

    int *ptr = new int(4);  // <-- Dynamically making new pointer variable.
    cout<<"The value of ptr: "<<*ptr<<endl;

    delete ptr;

    int *arr = new int[3]; // <-- Dynamically making an array using 'new'.
    //int arr[3];  <-- No difference if used this.

    arr[0] = 10;
    arr[1] = 20;
    *(arr+2) = 30;
    cout<<"The first element of array is: "<<arr[0]<<endl;
    cout<<"The second element of array is: "<<*(arr+1)<<endl;
    cout<<"The third element of array is: "<<arr[2]<<endl;


    // delete operator uses [] when deleting a block of memory.
    delete[] arr; 
    return 0;
}
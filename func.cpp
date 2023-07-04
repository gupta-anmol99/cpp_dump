#include<iostream>

using namespace std;

// Function Prototype
// Used for declaring functions if they are situated in the bottom.
// If you define your function at bottom without function prototype, then it will throw an error

int sum(int a, int b);  // <-- Function Prototype

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main() {
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<sum(num1, num2);
    return 0;
}
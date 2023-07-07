#include<iostream>
#include<string>
#include<fstream>

// The useful classes for wokring with files in c++ -
//     1. fstreambase
//     2. ifstream  --> Derived from fstreambase.  
//     3. ofstream  --> Derived from fstreambase.

// Primarily, there are two ways to open a file in C++:
//     1. Using the Constructor.
//     2. Using the member function open() of the class.

using namespace std;

int main() {

    // Using the constructor
    string st1 = "My name is Anmol.";
    string st2;

    // Writing file using the constructor
    ofstream out("sample31.txt"); // <-- Make an object of ofstream class and pass file name
    out<<st1;   // <-- {{object}}<<string

    // Reading from the file using constructor
    ifstream in("sample31b.txt");
    // in>>st2;  // <-- This will only give first word of the line. 
    // When used again. it will give second, then third...
    // in>>st2;

    // To get the complete line at once, we will use getline fn.
    getline(in, st2);
    cout<<st2;
    return 0;
}
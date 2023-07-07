#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    string name;
    string animal;

    ofstream writeit("sample31.txt");
    cout<<"Enter a string"<<endl;

    getline(cin, name);  // <-- To take string input with white spaces.

    writeit<<name;

    writeit.close();

    // New method for I/P using open(). Can be used for writing also.
    // Using eof() fn --> end of file. 0 while file is not read fullly.
    ifstream init;
    init.open("sample31b.txt");

    while (init.eof() ==0)
    {
        getline(init, animal);
        cout<<animal<<endl;
    }
    
    return 0;
}
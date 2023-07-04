#include <iostream>
#include <string>

using namespace std;

class binarynum
{
    string s;
    void chk_bin(void); // <-- Made the function private.

public:
    void read(void);
    void compliment(void);
    void display(void);
};

void binarynum ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binarynum ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary number" << endl;
            exit(0); // <-- Terminate the program showing that it ran successfully
        }
    }
}

void binarynum ::compliment(void)
{

    chk_bin(); // <-- Nested Function in a class

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binarynum ::display(void)
{
    cout << "The binary number is " << s << endl;
}

int main()
{
    binarynum b;
    b.read();
    // b.chk_bin();
    b.display();
    b.compliment();
    b.display();
    return 0;
}
// In this tutorial we will learn about destructors.
// This is used to free the memory we have allocated.

#include <iostream>
#include <string>

using namespace std;

// Destructor doesn't take any argument and doesn't return anything.

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;

    // This block means that the things that are created inside the block are
    // destroyed as soon as the block is exited.
    // So, when the block is exited, n2 and n3 are destroyed and
    // their destructors are invoked.
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;

    // n1 is destroyed after main finishes running. So the destructor is invoked
    // in the end.
    return 0;
}
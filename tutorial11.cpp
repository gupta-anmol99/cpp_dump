// In this tutorial we will learn about constructor overloading.
// We can write multiple constructors and let the compiler decide
// which one to choose according to the arguments given.

#include <iostream>
#include <string>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float rate;
    float amount;

public:
    // Whenever any consrtructor is made, you should create a default
    // constructor. This is to ensure that if you don't initizalize a value
    // then this default constrctor will run.

    BankDeposit() {}                    //  <-- Empty constructor. Req whenever declaring constructors.
    BankDeposit(int p, int y, int r);   // <-- Constructor with int rate in %
    BankDeposit(int p, int y, float r); // <-- Constructor with float rate R/100
    void show();
};

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    amount = principal;

    for (int i = 0; i < years; i++)
    {
        amount = amount * (1 + rate);
    }
}

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    amount = principal;

    for (int i = 0; i < years; i++)
    {
        amount = amount * (1 + rate);
    }
}

void BankDeposit ::show()
{
    cout << "The principal amount is: " << principal << endl;
    cout << "Number of years is: " << years << endl;
    cout << "The total amount is: " << amount << endl;
}

int main()
{
    BankDeposit bd1, bd2;

    int p, y, R;
    float r;

    cout << "Enter principal, years and rate of interest in percent " << endl;
    cin >> p >> y >> R;

    bd1 = BankDeposit(p, y, R); // <-- Constructor with int r is used.
    bd1.show();

    cout << "Enter principal, years and rate of interest in decimal " << endl;
    cin >> p >> y >> r;
    bd2 = BankDeposit(p, y, r); // <-- Constructor with float r is used.
    bd2.show();

    return 0;
}
// In this tutorial we will learn about multiple parameters
// templates.

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>

class Complex{
    public:
        T1 real;
        T2 imaginary;
        Complex(T1 real, T2 imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        T1 sumComplex(Complex c1){
            T1 r; T2 i;

            r = this->real + c1.real;
            i = this->imaginary + c1.imaginary;
            return r;
        }
};

int main() {
    Complex <float, float> c(3.14, 7.15);
    Complex <float, float> c2(1, 6);
    float s = c.sumComplex(c2);
    cout<<"The sum of real parts is "<<s<<endl;
    return 0;
}
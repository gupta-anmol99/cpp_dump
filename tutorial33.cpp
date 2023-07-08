// In this tutorial, we will learn about templates.
// Templates is used to make classes of many data types
// by only defining them once

#include<iostream>
#include<string>

template<class T> // <-- Making a template for data type X

class vector{
    public:
        T * arr;
        int size;

        vector(int m){
            size = m;
            arr = new T[size];
            // for (int i = 0; i < size; i++) {
            //     arr[i] = 0;
            // }
        }

        T dotProd(vector & v){ 
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
            
        }
};

using namespace std;

int main() {
    
    vector <float>v1(3); // <-- We can use any data type in <...>
    vector <float>v2(3);

    v1.arr[0] = 3.2;
    v1.arr[1] = 1.1;
    v1.arr[2] = 4.5;
    v2.arr[0] = 2.2;
    v2.arr[1] = 5.9;
    v2.arr[2] = 0;

    float d = v1.dotProd(v2);
    cout<<"The sum is: "<<d<<endl;

    // Defining through pointer and using constructor
    // vector *v1 = new vector(4);
    // vector *v2 = new vector(4);

    // v1->arr[0] = 3;
    // v1->arr[1] = 1;
    // v1->arr[2] = 4;
    // v1->arr[3] = 2;
    // v2->arr[0] = 2;
    // v2->arr[1] = 5;
    // v2->arr[2] = 0;
    // v2->arr[3] = 1;


    // X s = v1->dotProd(v2);
    // cout<<"The dotproduct is: "<<s<<endl;

    // Now let's say, you want to make a vector of floats,
    // You will need to make an entire class for it.
    // That's where templates come in.
    return 0;
}
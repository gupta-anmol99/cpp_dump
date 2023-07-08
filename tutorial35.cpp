// STL is used to reuse well tested classes and components

// STL has three components -
//  - Containers  --> Used to store data
//  - Algorithms  --> Used to process data
//  - Iterators   --> Objects that are used to point to an element in container.


/*
Types of Container -

1. Sequence Containers --> Store data in linear fashion
    - Vectors
    - List
    - Dequeue

2. Associative Containers --> Direct access to data
    - Maps
    - Multimaps
    - Sets
    - Multisets

3. Derived Containers --> Derived from above two containers
    - Queue
    - Stack
    - Priority Queue
*/


// In this tutorial we will leram about vectors
#include<iostream>
#include<string>
#include<vector> // <-- Include to make vector.
using namespace std;

template<class T>



void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; // <-- Same as previous line
    }
    cout<<endl;
        
}


int main() {
    // Vector reference - https://cplusplus.com/reference/vector/vector/
    vector<int> vec1; // <-- Make vector object

    /*
    Ways to make vectors - 

       - vector<int> vec1;      //zero length integer vector
       - vector<char> vec2(4);  //4-element character vector
       - vector<char> vec3(vec2);//4-element character vector from vec2
       - vector<int> vec4(6,3); //6-element vector of 3s ie 3 3 3 3 3 3 
    */
    int size, element;
    cout<<"Enter Size of the vector: ";
    cin>>size;



    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>element;   
        vec1.push_back(element);
    }

    display(vec1);

    // Using insert with iterator. Insert is used to put an element at specific
    // position

    vector<int> :: iterator iter = vec1.begin(); // Points to first element
    vec1.insert(iter, 32); // <-- Insert 32 at 0th position
    display(vec1);
    vec1.insert(iter+3, 432); // <-- Insert 432 at 3rd position

    display(vec1);
    vec1.insert(iter+5, 3, 1000); // <-- Insert 1000 at 5th position 3 times
    
    display(vec1);


    return 0;
}
#include<iostream>
#include<array>   // array STL header file

using namespace std;

int main(){
    array<int,4> a={1,2,3,4};   // declaration of array STL 
    
    int size=a.size();   // returns size of the array
    
    cout << "Size of array is: " << size << endl;
    
    cout << "Element at 2nd index is: " << a.at(2) << endl;   // at() returns the element at that index
    
    cout << "First element is: " << a.front() << endl;   // front() returns the first element of the array
    
    cout << "Last element is: " << a.back() << endl;   // back() returns the last element of the array
    
    
}

OUTPUT:
Size of array is: 4
Element at 2nd index is: 3
First element is: 1
Last element is: 4

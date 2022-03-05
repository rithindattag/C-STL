#include<iostream>
#include<set>           // set header file
using namespace std;

int main(){
    
    set<int> s;         // set declaration
    
    s.insert(3);            // insertion of elements into set
    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(2);
    
    for(int i:s){
        cout << i << " ";           // set returns the elements in the ascending order
    }                               // set ignores repeated elements
    cout << endl;
    
    s.erase(s.begin());             // removes element from begin
    for(int i:s){
        cout << i << " ";
    }
    cout << endl;
}

OUTPUT:
2 3 5 6 
3 5 6 

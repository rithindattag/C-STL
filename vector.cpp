#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    
    cout << "Before POP:" << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    cout << "Front is: " << v.front() << endl;
    cout << "Back is: " << v.back() << endl;
    cout << "Capacity is: " << v.capacity() << endl;
    cout <<"Size is: " << v.size() << endl;
    cout << endl;
    
    cout << "After POP:" << endl;
    
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    cout << "Front is: " << v.front() << endl;
    cout << "Back is: " << v.back() << endl;
    cout << "Capacity is: " << v.capacity() << endl;
    cout << "Size is: " << v.size() << endl;
}

OUTPUT:
Before POP:
1 2 3 4 5 
Front is: 1
Back is: 5
Capacity is: 8
Size is: 5

After POP:
1 2 
Front is: 1
Back is: 2
Capacity is: 8
Size is: 2

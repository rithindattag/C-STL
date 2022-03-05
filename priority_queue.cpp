#include<iostream>
#include<queue>         // priority_queue header file
using namespace std;

int main(){
    
    // max-heap declaration
    priority_queue<int> maxi;
    
    // min-heap declaration
    priority_queue<int, vector<int>, greater<int> > mini;
    
    
    maxi.push(2);           // pushes elements into queue
    maxi.push(3);
    maxi.push(1);
    maxi.push(5);
    maxi.push(6);
    
    int n=maxi.size();
    cout << "Max-Heap:" << endl;
    for(int i=0;i<n;i++){                   // returns the Max-Heap
        cout << maxi.top() << " ";           
        maxi.pop();
    }
    cout << endl;
    
    mini.push(2);           
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(6);
    
    int m=mini.size();
    cout << "Min-Heap:" << endl;
    for(int i=0;i<m;i++){                   // returns Min-Heap
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}

OUTPUT:
Max-Heap:
6 5 3 2 1 
Min-Heap:
0 1 2 5 6

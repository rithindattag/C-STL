#include<iostream>          // Queue: FIFO(First In First Out)
#include<queue>             // queue header file
using namespace std;

int main(){
    
    queue<string> q;            // queue declaration
    
    q.push("rithin");           // pushes element into queue
    q.push("datta");
    q.push("gundu");
    
    q.pop();            // removes the first element from queue
    
    cout << q.front();          // returns the first element of queue
}

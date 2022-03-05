#include<iostream>      // Stack: LIFO (Last In first Out)
#include<stack>         // stack header file
using namespace std;

int main(){
    
   stack<string> s;         // declaration of stack
   
   s.push("rithin");            // pushes the elements into stack
   s.push("datta");
   s.push("gundu");
   
   s.pop();         // removes the element from stack
   
   cout << s.top();         // returns the top element
   
}

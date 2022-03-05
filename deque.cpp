#include<iostream>
#include<deque>         // deque header file
using namespace std;

int main(){
   
   deque<int> d;            // declaration of deque
   
   d.push_back(1);          // adds element from the back
   d.push_front(2);         // adds element from the front
   
   d.pop_back();            // deletes element from the back
   d.pop_front();           // deletes element from the front
   
   cout << d.at(1);         // access element at that index
   
   cout << d.front();           // returns the first element
   cout << d.back();            // returns the last element
   
   cout << d.empty();           // returns 1 if empty else 0
}

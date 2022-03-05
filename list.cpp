#include<iostream>
#include<list>         // list header file
using namespace std;

int main(){
    
   list<int> l;         // declaration of list
   
   l.push_back(1);          // adds element from last
   l.push_front(2);         // adds element from the front
   
   l.pop_back();            // deletes element from the back
   l.pop_front();           // deletes element from the front
   
}

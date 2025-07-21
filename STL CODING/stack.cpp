//  stack using stl library  (Stack follows Last In First Out Approach means the element which is stored at last will be removed first)

#include<iostream>
#include<stack>  //including the STL library of stack 
using namespace std;

int main(){
    stack<string> s; //declaring a stack of string type

    s.push("Hey");  //adding the string to the stack
    s.push("Sahil");
    s.push("hello");

    cout<<"top Element is : "<<s.top()<<endl;  //printing the top element  it will print the element which is stored at last i.e hello

    s.pop();  //pop is used to remove the element so, it will remove the element which is stored in last  which is on the top


    // after pop now printing the top element now the top element will be the element which is stored at second last
    cout<<"After pop TOp element is : "<<s.top()<<endl;

    // printing the size of stack
    cout<<"Size of stack is : "<<s.size()<<endl;
}
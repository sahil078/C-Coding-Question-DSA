// stl deque

#include<iostream>
#include<deque>  //adding the stl library of deque
using namespace std;

int main(){
    //creating a deque object
    deque <int> dq;

    //pushing elements in the front and back end
    dq.push_back(4);  //adding the element in back of the deque

    dq.push_front(8);  //adding the element at front of the deque
    dq.push_front(2);  //adding the element at front of the deque
    dq.push_front(3);  //adding the element at front of the deque
    dq.push_front(5);  //adding the element at front of the deque

    cout<<"The deque is : ";
    for(int i:dq){
        cout <<i<< " ";   //prints all the elements present in the deque
    }

    cout<<endl;
    cout<<"printing the 1st element index: "<<dq.at(1)<<endl;

    cout<<"front :"<<dq.front()<<endl;  //first element of deque

    cout<<"Last :"<<dq.back()<<endl;  //first element of deque

    cout<<"empty or Not: "<<dq.empty()<<endl;
    
    // removing the element from back of the deque
    cout<<"\n the deque after removing the element from back: "<<endl;
    dq.pop_back();
        for(int i:dq){
        cout <<i<< " "; 
        }

    //removing the element from front of the deque
    cout<<"\n the deque after removing the element from front: "<<endl;
    dq.pop_front();
    for(int i:dq){
        cout <<i<< " ";
    }

    cout<<endl;

    // delete the element from the deque
    cout<<"Before erasing : "<<dq.size()<<endl;
    dq.erase(dq.begin() , dq.begin()+1);  //in erase function we have declare that from where to where we want to delete the element
    cout<<"After erasing : "<<dq.size()<<endl;

    for(int i:dq){
        cout<<i<<" ";
    }
}

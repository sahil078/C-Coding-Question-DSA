// sTL Queue (Queue follows  the First In First Out Approach which mean the element which is stored first will be removed first)

#include<iostream>
#include<queue>  //adding the stl library of queue

using namespace std;

int main(){
    queue<string> q; // declaring a queue of string datatype

    q.push("sahil");  //adding a string in queue
    q.push("amir");
    q.push("saquib");

        // printing the first element of queue
    cout<<"First element is : "<<q.front()<<endl;

    // printing the last element of queue
    cout<<"Last element is : "<<q.back()<<endl;

    // printing the strings stored in queue
    cout<<"The strings in the queue are : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;   //printing the front element of the queue which is the first inserted element
        q.pop();
    }

    // checking the size of queue
    cout<<"Size of queue is : "<<q.size()<<endl;

}
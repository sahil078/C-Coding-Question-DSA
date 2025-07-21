// STL Priority queue (when we create a pririty queue is by default max heap means it will return the maximum element of the queue first and so on ..... , also we can convert in into min heap)

#include<iostream>
#include<queue> 
using namespace std;

int main(){
    // declaring the priority queue  (Max heap)
    priority_queue<int> pq;

    // inserting the element in max heap 
    pq.push(10);
    pq.push(6);
    pq.push(3);
    pq.push(13);

    // now printing the max heap (pq)
    int n1 = pq.size();  //storing the size of pq2 in another variable which is n
    cout<<"printing the max-heap"<<endl;
    for(int i=0; i<n1; i++){
        cout<<"Max Heap: "<<pq.top()<<endl;   //printing the topmost element and then poping the element
        pq.pop();
    }

    cout<<endl;
    // declaring a priority queue of min heap
    priority_queue <int, vector<int>, greater<int>> pq2;

    // inserting the element in min heap
    pq2.push(2);
    pq2.push(5);
    pq2.push(9);
    pq2.push(12);

        // now printing the min heap (pq2)
    int n = pq2.size();  //storing the size of pq2 in another variable which is n
        cout<<"printing the min-heap"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Min Heap: "<<pq2.top()<<endl;   //printing the topmost element and then poping the element
        pq2.pop();
    }

    return 0;
}
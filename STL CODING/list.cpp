// STL List (it is doubly link list)

#include<iostream>
#include<list> //adding the stl library of list
using namespace std;


int main(){
    list<int> l; //creating a list of integers
    cout<<"List before insertion: "<<endl;

    // creating the list with size and element
    list<int> n(3, 10);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(4);
    l.push_front(7);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());   // the position that we passed in erase function it will be deleted 

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

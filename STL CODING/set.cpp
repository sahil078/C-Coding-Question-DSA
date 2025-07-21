// STL SET  (set stores the unique element which means if we stores value 3 5times than it will sotre 3 only one time) , 
// in set we can't perform modification either we can insert of delete the value
// return the element in sorted order

#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(7);
    // if we try to store single element multiple time than it will store only one of them
    s.insert(7);
    // s.insert(7);
    // s.insert(7);
    s.insert(4);
    s.insert(3);
    s.insert(9);

    // printing the element of set
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    // deleting the element from set
    s.erase(4); //it will delete the element 4
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    // count function show that the given element is prisent or not
    cout<<"Count is available or not: "<<s.count(3)<<endl;

    // iterator
    set<int>::iterator itr = s.find(3);
    // iterator will fint the element 3 and than print the elements from 3 
    for(auto it=itr; it!=s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
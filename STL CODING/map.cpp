// STL map
#include<iostream>
#include<map>  //including the stl header file of map
using namespace std;


int main(){
    //creating a map
    map<int, string> m;
    //inserting elements into the map
    m[1] = "one";      //in map m[1] where 1 is not index it is a key which is used to access the element
    m[3] = "three";
    m[2] = "two";

    // printing the map (print the index in ordered manner)
    for(auto i = m.begin(); i != m.end(); i++){
        cout << i->first << ": " << i->second << endl;
        // in above line first is denoting the key {1,2,3} , and second is denoting the element{one , 2 , 3}
    }

    cout<<endl;
    // inserting the element in map
    m.insert({5 , "five"});
    // printing the map
    for(auto i = m.begin(); i != m.end(); i++){
        cout << i->first << ": " << i->second << endl;
    }

    // finding the element in map
    cout<<"find the element 3 : "<<m.count(3)<<endl;

    // before erasing
    for(auto i:m){
        cout<<i.first << " : "<<i.second<<endl;
    }

    cout<<endl;
    // after erasing
    m.erase(2);
    for(auto i:m){
        cout<<i.first << " : "<<i.second<<endl;
    }
} 
// STL vector

#include<iostream>
#include<vector>  //adding the stl library of vector 
using namespace std;


int main(){
    vector<int> v;   //declaring a vector

    // if you want to create a vector in which the size is already known
    // then use this syntax: vector <data_type> vec(size);
    vector<int> a(5 /*size of vector*/ , 1 /*initializing the vector with 1 if you dont initialize rhe vector than it all the space is automatically assigned with zero*/ );

    // size operator is used to check how many elements are present in vector
    cout<<"Size of vector: " <<v.size()<<endl;

    // capacity operatoe is used to check the capacity of vector how many memeory is available
    cout<<"capacity of vector is :"<<v.capacity()<<endl;

    v.push_back(2);  // push_back is used to add element in vector
    cout<<"Size of vector: " <<v.size()<<endl;
    cout<<"capacity of vector is :"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl;

    v.push_back(7);
    cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl;

    cout<<"ELement at 2nd index : "<<v.at(2)<<endl;
    cout<<"first element in vector"<<v.front()<<endl;
    cout<<"last element in vector"<<v.back()<<endl;

    cout<<"before pop : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();  //pop_back operator is used to remove an element from last
    cout<<"after pop : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    } 

    cout<<"\n before clear: "<<v.size()<<endl;
    v.clear();     //clear function is used to delete all the elements and make size =0
    cout<<"after clear: "<<v.size()<<endl;
}

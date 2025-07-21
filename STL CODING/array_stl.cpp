// STL Array

#include<iostream>
#include<array>  //adding STL library of Array
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};   //Basic array

    array<int , 4> a = {1,2,3,4};  //declaring the array using stl of array

    // check the size of stl array
    int size = a.size();
    cout << "Size of the array is: "<< size << endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }

    // Operations to perform on array

    // accessing element by index 
    cout<<"Element at 2nd Index is : "<<a.at(2)<<endl; // at operator is used to access the index of element

    // to check array is empty or not 
    cout<<"Empty or Not : "<<a.empty()<<endl;  //empty oprator is used to check the array is empty or not it return the output in boolean form

    // to access the first element of array
    cout<<"The first element of array is : "<<a.front()<<endl;   // front operator is used to find the first element of array

    //to access the last element of array
    cout<<"The last element of array is :"<<a.back()<<endl;   //back operator is used to find the last element of the array

    
    return 0;
}
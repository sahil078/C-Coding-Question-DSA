// A shop will give discount of 10% if the cost of purchased quantity is more than 1000. 
// Ask user for quantity
// Suppose , one unit will cost 100
// judge nad print total cost for user

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int quantity, cost;
    cout<<"Enter the quantity : ";
    cin>>quantity;
    
    cost = quantity*100;

    if(cost > 1000){
        cout<<"the total cost is "<< (cost - (cost*0.1))<<endl;
    }
    else{
        cout<<"The total cost is : "<<cost <<endl;
    }
}
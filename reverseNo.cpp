// reverse the number

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n ;
    cout<<"Enter the number to reverse: ";
    cin>>n;

    int reverse = 0;
    while(n != 0){
        reverse = (10 * reverse) + (n % 10);
        n = n / 10;
    }
    cout<<reverse;

}
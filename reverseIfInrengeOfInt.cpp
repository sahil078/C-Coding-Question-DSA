// reverse the number if it is in the renge of integer else return 0

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = 0;
    while( n != 0){
        int digit = n % 10;
    if (ans >= INT8_MIN && ans <= INT8_MAX){
        ans = (ans*10)+digit;
        n = n/10;
    }
    else{
        return 0;
    }
    }   
    return ans;
}
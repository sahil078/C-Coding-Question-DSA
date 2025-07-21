// Check the given number is prime or not

#include<iostream>
using namespace std;
bool isPrime(int n ){
    for(int i=2; i<n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;

}

int main() {
    int n ; 
    cout<<"Enter the no.. To check Prime or not : ";
    cin>>n;

    if(isPrime(n)){
        cout<<"The number "<< n <<" is Prime";
    }
    else{
        cout<<"The number "<< n <<" is not prime";
    }
}
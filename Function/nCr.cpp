// calculate the nCr 

#include<iostream>
using namespace std;

int fact(int n ){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n , int r){
    int nume = fact(n);

    int deno = fact(r)*fact(n-r);

    return nume/deno;
}
int main(){
    int a, b;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"The value of nCr is : "<<nCr(a , b)<<endl;

}
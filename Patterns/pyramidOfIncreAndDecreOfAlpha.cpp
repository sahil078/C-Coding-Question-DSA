
#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no. of rows: ";
    cin>>n;


    for(int i=1; i<=n; i++){
        char ch = 'A';

        // for spacing
        for(int k=1 ; k<=n-i; k++){
            cout<<" ";
        }

        // for charecter in increasing order
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        }

        // for charector in decreasing order
        for(int l=0; l>=1; l--){
            cout<<ch;
        }
        cout<<endl;


    }
}
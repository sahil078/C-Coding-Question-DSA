#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        // for spacing
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }

        // Display the number in ascending
        for(int j=1 ; j<=i; j++){
            cout<<j;
        }

        // display the number in descending order
        for(int l=i-1; l>=1; l--){
            cout<<l;
        }
        
        cout<<endl;
    }
    return 0;


}
// Convert Decimal to binary


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number to convert in binary: ";
    cin>>n;

    int i=0;
    int ans = 0;
    while(n != 0){
        int bit = n & 1;

        ans = (bit * pow(10 , i)) + ans;
        n = n >> 1;

        i++;
    }
    cout<<"The number "<< n <<" After converting in Bit is : "<< ans<< endl;

    return 0;
}

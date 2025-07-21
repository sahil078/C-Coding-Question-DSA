// find the square of given number

#include<Iostream>
using namespace std;

// function to find the sqare root

long long int findSquare(int n ){
    int start = 0, end = n;
    long long int mid = start + (end - start)/2;

    long long int ans = -1;
    while(start <= end){
        int sqrt = mid*mid;

        if(sqrt == n){
            return mid;
        }

        if(sqrt < n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int n ; 
    cout<<"Enter a number: ";
    cin>>n;

    int findsqr = findSquare(n);

    cout<<"The sqaure root of "<<n <<" is :"<<findsqr<<endl;

    return 0;
}

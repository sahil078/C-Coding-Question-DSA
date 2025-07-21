// Write a Program to calculate Best Time to Buy and Sell the Stocks

#include<iostream>
using namespace std;

int maxProfit(int arr[] , int n){
    int maxProfit = 0 , bestBuy = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > bestBuy){
            maxProfit = max(maxProfit,arr[i]-bestBuy);
        }
        else{
            bestBuy = min(bestBuy , arr[i]);
        }
    }

    return maxProfit;
}

int main(){
    int arr[] = {7,1,5,4,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxProfit(arr , n) <<endl;

}
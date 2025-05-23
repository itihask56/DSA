#include<iostream>
#include<vector>
using namespace std;

int fib(vector<int>dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fib(dp,n-1)+fib(dp,n-2);
}



int main(){
    int n;
    cout<<"Enter nth fibbonacii number you want to find: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fib(dp,n);
}
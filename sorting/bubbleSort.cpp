#include<iostream>
using namespace std;

int main(){
    int arr[5]={6,2,8,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
 
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int arr[5]={4,2,7,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){

        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
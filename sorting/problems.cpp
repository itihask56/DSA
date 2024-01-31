#include<iostream>
using namespace std;

//Reverse the array
int main(){
    int arr[5]={4,3,5,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e=size-1;
    
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


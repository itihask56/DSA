#include<iostream>
using namespace std;
bool isBinarySearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        return isBinarySearch(arr,mid+1,e,key);
    }
    else{
        return isBinarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5]={3,5,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=6;
    if(isBinarySearch(arr,0,size-1,key)){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
}
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        print(arr,size);
        bool smallerProblem = isSorted(arr+1,size-1);
        return smallerProblem;
    }
}
int main(){
    int arr[5]={4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr,size)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}
#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int leftArrLen = mid-s+1;
    int rightArrLen = e-mid;

    int *first = new int[leftArrLen];
    int *second = new int[rightArrLen];
    
    //copy values;
    int mainArrayIndex=s;
    for(int i=0;i<leftArrLen;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex= mid+1;
    for(int i=0;i<rightArrLen;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex=s;

    while(index1<leftArrLen && index2<rightArrLen){
        
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<leftArrLen){
        arr[mainArrayIndex++]=first[index1++];

    }
    while(index2<rightArrLen){
        arr[mainArrayIndex++]=second[index2++];
    }

}

void mergeSort(int *arr,int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    //sort left part
    mergeSort(arr,s,mid);
    //sort right part
    mergeSort(arr,mid+1,e);

    //merge the solution

    merge(arr,s,e);
}

int main(){
    int arr[7]={4,3,3,4,5,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
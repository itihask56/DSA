#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,2,5,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++){
        int temp =arr[i];
         int j=i-1;


        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
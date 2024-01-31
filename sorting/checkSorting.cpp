#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    

        int i=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]<=arr[j]){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    
}

int main(){
    int arr[5]={2,2,6,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    if(isSorted(arr,size)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}
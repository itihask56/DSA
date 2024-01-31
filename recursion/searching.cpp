#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool smallerProblem=linearSearch(arr+1,size-1,key);
        return smallerProblem;
    }
}
int main(){
    int arr[5]={2,5,3,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=88;
    if(linearSearch(arr,size,key)){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
}
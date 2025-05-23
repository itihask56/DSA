#include<iostream>
using namespace std;

//print arry from begining by taking three parameters
void printArray(int arr[],int size,int index){
    if(index == size){
        return;
    }

    cout<<arr[index];
    printArray(arr,size,index+1);
}


//print array in reverse order by taking three parameters

void printArrayReverse(int arr[],int size,int index){
    if(index==size){
        return ;
    }
    printArrayReverse(arr,size,index+1);
    cout<<arr[index]<<" ";
}

//print array by taking just two parameters,we passed array and index of last element
void printArrayFromLastIndex(int arr[],int index){
    if(index<0){
        return ;

    }
    printArrayFromLastIndex(arr,index-1);
    cout<<arr[index]<<" ";

}
//print array in reverse order by taking just two parameters,we passed array and index of last element

void printArrayFromLastReverse(int arr[],int index){
    if(index<0){
        return ;

    }
    cout<<arr[index]<<" ";
    printArrayFromLastReverse(arr,index-1);
   

}
int main(){
    int arr[5]={2,4,1,6,5};

     // printArray(arr,5,0);

    //print array in reverse order
    // printArrayReverse(arr,5,0);

    //print arry without giving size
    // printArrayFromLastIndex(arr,4);

    // printArrayFromLastReverse(arr,4);
}
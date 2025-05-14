 
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int main(){
//     int arr[5]={4,2,7,6,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size-1;i++){

//         int minIndex = i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[minIndex],arr[i]);
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_index = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }

}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,8,4,10,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting: "<<endl;
    printArray(arr,size);
    selectionSort(arr,size);
    cout<<"\nArray after sorting: "<<endl;
    printArray(arr,size);
}
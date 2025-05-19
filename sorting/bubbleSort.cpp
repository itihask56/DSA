#include<iostream>
using namespace std;

// int main(){
//     int arr[5]={6,2,8,4,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<"Sorted array: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


void bubbleSort(int arr[],int size){
    for(int i=size-2;i>=0;i--){
        bool swapped = 0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                bool swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6,2,8,4,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting: "<<endl;
    printArray(arr,size);
    cout<<"\nArray after sorting: "<<endl;
    bubbleSort(arr,size);
    printArray(arr,size);
}
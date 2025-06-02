 
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

void printCharArray(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void selectionSortReverse(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int max_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }
        swap(arr[i],arr[max_index]);
    }
}

void charSelectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    // int arr[]={2,8,4,10,5,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Array before sorting: "<<endl;
    // printArray(arr,size);
    // // selectionSort(arr,size);
    // selectionSortReverse(arr,size);
    // cout<<"\nArray after sorting: "<<endl;
    // printArray(arr,size);



    char arr[]={'i','t','i','h','a','s'};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Char Array before Sorting: "<<endl;
    printCharArray(arr,size);
    cout<<"\n Char Array after Sorting: "<<endl;
    charSelectionSort(arr,size);
    printCharArray(arr,size);
}
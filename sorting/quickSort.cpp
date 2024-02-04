#include<iostream>
using namespace std;

//set a pivot element pivot=arr[s]
//find correct posion of pivot element
//set the pivot element at correct posion
//apply two pointer apporoach to sort
//left side of pivot should be less that pivot and right side should be greater than pivot


int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count =0;
    for(int i=s;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    //place pivot at the right position
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
         while(arr[i]<pivot){
            i++;
         }
         while(arr[j]>pivot){
            j--;
         }

         if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
         }
    }
    return pivotIndex;
    
}

void quickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    //sort left side of pivot
    quickSort(arr,s,p-1);

    //sort right side of pivot
    quickSort(arr,p+1,e);
}


int main(){
    int arr[5]={3,2,6,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
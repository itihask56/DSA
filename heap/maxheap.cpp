#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int size; //total elements in heap
    int totalSize; //total size of array

    public:

    MaxHeap(int n){
        arr= new int[n];
        size =0; //no elements in the begining
        totalSize =n; 

    }

    //insert into the heap
    void insert(int value){
        //check weather heap is empty or not

        if(size==totalSize){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        arr[size]=value;
        int index = size;
        size++;

        //push the data in the heap by comparing with its parent

        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index= (index-1)/2;
        }
        cout<<arr[index]<<" into the heap"<<endl;


    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    void Heapify(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index +2;

        //largest will store index of the element which is 
        //greater between parents,left child and right child
        if (left<size && arr[left]>arr[largest]){
            largest =left;
        }
        if(right<size && arr[right]>arr[largest]){
                largest = right;
            

        
        }
        if(largest!=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap Underflow"<<endl;
            return;
        }
        cout<<arr[0]<<" is deleted from Heap"<<endl;

        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }
        Heapify(0);
    }
};

int main(){
    MaxHeap H1(6);

    H1.insert(23);//                    32
    H1.insert(12);//                30       14
    H1.insert(14);//             12    23   5
    H1.insert(30);// 
    H1.insert(32);// 
    H1.insert(5);// 
    H1.print();// 

    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.print();


    H1.insert(60);
    H1.print();
    H1.insert(1);
    H1.print();


}
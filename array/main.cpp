#include <iostream>
using namespace std;
// int main(int argc, char const *argv[])
// {
//      cout<<"Namaste pitashri"<<endl;
//     return 0;
// }

//Swap alternate

void swapNum(int n1,int n2){
    int temp;
    temp = n1;
    n1=n2;
    n2 = temp;
    
}

void printArr(int arr[],int n){
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alternate_arr(int arr[],int size){
     for(int i=0;i<size;i+=2){
        if(i+1<size){
            // swap(arr[i],arr[i+1]); //we can use inbuilt swap function to swap number
            swapNum(arr[i],arr[i+1]);  // we can also design our own swap funtion
        }
     }
}

int main(int argc, char const *argv[])
{
     int even_arr[6]={2,3,1,5,7,10};
     int odd_arr[7]={2,3,1,5,7,10,9};

    swap_alternate_arr(even_arr,6);
    swap_alternate_arr(odd_arr,5);
    printArr(even_arr,6);
    printArr(odd_arr,7);
    return 0;
}



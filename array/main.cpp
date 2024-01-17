#include <iostream>
using namespace std;
// int main(int argc, char const *argv[])
// {
//      cout<<"Namaste pitashri"<<endl;
//     return 0;
// }

//Swap alternate
void printArr(int arr[],int n){
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alternate_arr(int arr[],int size){
     for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
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

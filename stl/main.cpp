#include<iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
     //normal array
    int basic[3]={1,2,3};

    //stl array ,static array
    array<int,4> arr = {1,2,3,4};
    int size = arr.size();
    // cout<<"Size of array"<<size;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"element at 2nd index:"<<arr.at(2)<<endl;
    cout<<"Array is empty or not: "<<arr.empty()<<endl;
    cout<<"First element: "<<arr.front()<<endl;
    cout<<"Last element: "<<arr.back()<<endl; 
     


    return 0;
}

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of N: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter Arrays Elements: "<<endl;
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

/*int main(){
    // int arr[]={1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    //  for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    //  }

    //This is invalid code

    // int arr[5]={1,2,3,4,5};
    // // int size = sizeof(arr)/sizeof(arr[0]);
    //  for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    //  }
    // return 0;


}*/


//create array through pointer

// int main(){
//     int n;
//     cout<<"Enter size of arr: "<<endl;
//     cin>>n;
//     int *arr = new int[n];

//     cout<<"Enter arrays elements: "<<endl;
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }


//     //in this implementation we don't have to enter arrays element
//     /*for(int i=0;i<n;i++){
//         arr[i]=i+1;
//     }*/

//     cout<<"The arrays Elements are: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     delete []arr;
//     return 0;
// }


//Using loop with pointers

int main(){
    int size_of_arr=5;
    int *p = arr;

    for(int i=0;i<size;i++){
        cin>>*(p+i)<<endl;
    }
}



#include <iostream>
using namespace std;

// int binarySearch(int arr[],int key,int size){

//     int s=0;
//     int e=size-1;
//      int mid = (s+e)/2;
//     while(s<=e){
       
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e = mid -1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid=(s+e)/2;
//     }
//     return -1;
// }
// int main(){
//     int arr[6]={1,3,5,12,23,34};
//     int key = 34;
//    cout<<"Element is found at index: "<< binarySearch(arr,key,6);
// }






//first and last occurence of element in a array 

// int firstOcc(int arr[], int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[], int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[10]={1,3,3,3,5,12,12,12,23,34};
//     int key = 3;
     
//    cout<<"Fist occurence of element "<<key<< " is found at index: "<< firstOcc(arr,10,key)<<endl;
//    cout<<"Last occurence of element "<<key<< " is found at index: "<< lastOcc(arr,10,key)<<endl;
//    cout<<"Total "<<lastOcc(arr,10,key)-firstOcc(arr,10,key)+1<<endl;
// }
    
//find peak element in a mountain array
// int peakElement(int arr[],int size){
//     int s = 0;
//     int e = size-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s +(e-s)/2;
//     }
//     return s;

// }

// int main(){
//     int arr[5]={1,3,3,5,1};
//     cout<<peakElement(arr,5);
// }

#include<iostream>
using namespace std;

//find pivot element
// int getPivot(int arr[],int size){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;

//     while(s<e){
        
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[5]={2,3,5,6,2};
//     cout<<getPivot(arr,5)<<endl;
// }

//searching in a rotated sorted array;

// int binarySearch(int arr[],int s,int e, int key ){

//      int mid = s+ (e-s)/2;
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
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int getTarget(int pivot,int arr[],int size,int key){
     
//     if(arr[pivot]<=arr[0]){
//         return binarySearch(arr,pivot,size-1,key);
//     }
//     else{
//        return binarySearch(arr,0,pivot-1,key);
//     }
// }
// int getPivot(int arr[],int size){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;

//     while(s<e){
        
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[6]={2,3,5,6,1,2};
//     int pivot = getPivot(arr,6);
//     int key = 1;
//    cout<< getTarget(pivot,arr,6,key)<<endl;
// }


//find square root upto n decimal places

// double morePrecise(int tempSol,int percison,int n){
//     double factor = 1;
//     double ans = tempSol;
//     for(int i=0;i<percison;i++){
//         factor = factor/10;
        
//         for(double j = ans;j*j<n; j=j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }

// int findSqrt(int n){

//     int s =0;
//     int e = n;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         int squareroot = mid*mid;
//         if(squareroot>n){
//             e= mid-1;
//         }
//         else if(squareroot<n){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             return mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter number: "<<endl;
//     cin>>n;

//     int tempAns=findSqrt(n);
//     int percisionUpTo = 3;
//     cout<<"More Precise ans: "<<morePrecise(tempAns,3,n)<<endl;
// }

//book allocation problem

bool isPossible(int arr[],int n,int m,int mid){
    int pageSum=0;
    int stdCount = 1;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            stdCount++;
            if(stdCount>m || arr[i]>mid){
                return false; 
            }
            pageSum+=arr[i];
        }
    }
    return true;
}

int main(){

    int arr[4]={10,20,30,40};
    int noOfBooks=sizeof(arr)/sizeof(arr[0]);
     
    cout<<"Enter no of students: "<<endl;
    int noOfStudents;
    cin>>noOfStudents;
    

    int s=0;
    int sum=0;
    for(int i=0;i<noOfBooks;i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,noOfBooks,noOfStudents,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<< ans;


}
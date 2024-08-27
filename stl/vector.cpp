#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])

{
    //vector<int>arr(size,inititialization)
     
    // vector <int>arr;

    // vector<int>v(5,10); //vector is init. with size 5 and each element is 10
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // //coping a vector
    // vector<int>v2(v);
    // for(int i:v2){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"Size -->"<<arr.capacity()<<endl; //return 0, memory is not allocated at this time
    // arr.push_back(10); 
    // cout<<"capacity -->"<<arr.capacity()<<endl;  //capacity =1
    // cout<<"size -->"<<arr.size()<<endl;         //size =1

    // arr.push_back(20);
    // cout<<"capacity -->"<<arr.capacity()<<endl; //capacity =2
    // cout<<"size -->"<<arr.size()<<endl;         //size =2

    // arr.push_back(20);
    // cout<<"capacity -->"<<arr.capacity()<<endl;  //capacity =4
    // cout<<"size -->"<<arr.size()<<endl;         //size =3

    // arr.push_back(40);
    // cout<<"capacity -->"<<arr.capacity()<<endl; //capacity =4
    // cout<<"size -->"<<arr.size()<<endl;         //size =4

    // arr.push_back(50);
    // cout<<"capacity -->"<<arr.capacity()<<endl; //capacity =8
    // cout<<"size -->"<<arr.size()<<endl;         //size =5

    //  arr.push_back(60);
    // cout<<"capacity -->"<<arr.capacity()<<endl; //capacity =8
    // cout<<"size -->"<<arr.size()<<endl;         //size =6

    //  arr.push_back(70);
    // cout<<"capacity-->"<<arr.capacity()<<endl; //capacity =8
    // cout<<"size -->"<<arr.size()<<endl;        //size =7

    // arr.push_back(80);
    // cout<<"capacity -->"<<arr.capacity()<<endl; //capacity =8
    // cout<<"size -->"<<arr.size()<<endl; //size =8
    // //conclusion: vector double its size everytime when it becomes full

    // cout<<"fron element: "<<arr.front()<<endl;
    // cout<<"back element: "<<arr.back()<<endl;

    // cout<<"array before pop back"<<endl;
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"Array after pop back"<<endl;
    // arr.pop_back(); //removes last element of vector;
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"arry before clear size:"<<arr.size()<<endl;
    // cout<<"Capacity of array before clear size:"<<arr.capacity()<<endl;

    // arr.clear(); //size of bector becomes 0 , but its capacity remains same

    // cout<<"array after clear size: "<<arr.size()<<endl;
    // cout<<"Capacity of array after clearing size:"<<arr.capacity()<<endl;

    vector<int>arr1{11,31,21,34,23};
    // cout<<"vector before sorting...";

    // for(auto i:arr1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // sort(arr1.begin(),arr1.end());

    // cout<<"sort in increasing order"<<endl;
    //  cout<<"vector after sorting...";
    //  for(auto i:arr1){
    //     cout<<i<<" ";
    // }

    // cout<<"sort in decreasing order"<<endl;
    // sort(arr1.begin(),arr1.end(),greater<int>());
    // for(auto i:arr1){
    //     cout<<i<<" ";
    // }

    //binary search
    cout<<endl;
    cout<<binary_search(arr1.begin(),arr1.end(),11);
    cout<<endl;

    //find index of a key
    cout<<find(arr1.begin(),arr1.end(),21) - arr1.begin();
    cout<<endl;



    return 0;
}

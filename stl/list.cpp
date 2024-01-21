#include <iostream>
#include<list>
using namespace std;

int main(){
    list <int>l;
    list<int>list1(5,10); //listt is init. with size 5 and each element is 10
    for(int i:list1){
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<"Size: "<<list1.size()<<endl;

    l.push_back(10);
    l.push_front(20);
    l.push_back(30);
    l.push_front(40);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\n";

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\n";
    l.erase(l.begin(),l.end());
    cout<<"Size: "<< l.size(); //0
     
    
}

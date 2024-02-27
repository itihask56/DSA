#include<iostream>
#include<map>
using namespace std;
//map stores data in sorted order

int main(){

    map<int,string>m;
    m[1]="dev";
    m[2]="itihas";
    m[12]="verma";
    m.insert({5,"bhaii"});

    cout<<"before erase"<<endl;
    for(auto i: m){
        cout<<i.first<<":"<<i.second<<endl;
    }
    
    //returns weather an element is present in map or not
    cout<<"finding 13 ->"<<m.count(13)<<endl;
    cout<<"after erase"<<endl;
    m.erase(12);

    for(auto i: m){
        cout<<i.first<<":"<<i.second<<endl;
    }

    auto itr =m.find(2);
    for(auto it=itr;it!=m.end();it++ ){
        cout<<(*it).first<<endl;
    }

    return 0;
}
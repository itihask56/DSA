#include<iostream>
#include<set>
using namespace std;

void print(set<int>s){
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(25);
    s.insert(35);
    s.insert(45);

    print(s);
    cout<<endl;
    s.erase(s.begin());
    print(s);

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    print(s);
    // s.erase(s.begin(),s.end());
    // print(s);

    //count mehod check wheather element is present in set or not

    cout<<"5 is present or not: "<<s.count(45)<<endl;
    
    //return iterator if element is present in the set
    set<int>::iterator itr = s.find(25);

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" "<<endl;
    }


}
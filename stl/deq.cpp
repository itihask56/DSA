 
#include<iostream>
#include<deque>
using namespace std;

int main(int argc, char const *argv[])
{
     deque<int>d;

     d.push_back(10); //10
     d.push_front(20); //20 10
     d.push_back(30); //20 10 30
     d.push_front(40); //40 20 10 30

     for(int i:d){
        cout<<i<<" ";
     }
     cout<<endl;

     d.pop_front();//20 10 30
      for(int i:d){
        cout<<i<<" ";
     }
     cout<<endl;
     d.pop_back(); //20 10
     for(int i:d){
        cout<<i<<" ";
     }

     cout<<"Front: "<<d.front()<<endl;
     cout<<"Back: "<<d.back()<<endl;
     cout<<"Empty or not: "<<d.empty()<<endl;

     cout<<"Size before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);

    for(int i:d){
        cout<<i<<" "; 
    }
    
    cout<<"\nSize after erase "<<d.size()<<endl;


    return 0;
}

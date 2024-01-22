#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("I");
    s.push("am");
    s.push("pushing");
    s.push("file");

    cout<<"Size: "<<s.size()<<endl;
    cout<<s.top()<<endl; //file
    s.pop();
    cout<<s.top()<<endl; //pushing
    cout<<"Size: "<<s.size()<<endl; 
    
    cout<<"Empty or not: "<<s.empty()<<endl;

}
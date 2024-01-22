#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
   cout<<"Size: "<< q.size()<<endl;
    q.push("I");
    q.push("am");
    q.push("pushing");
    q.push("file");

    cout<<"Size: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    cout<<"last element: "<<q.back()<<endl;

    q.pop();
    cout<<"after deleting first element: "<<q.front()<<endl;
     

   

}
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //how to create queue
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //delete
    q.pop();
    q.pop();

    //front element
    cout<<"front element: "<<q.front()<<endl;

    //back element
    cout<<q.back()<<endl;

    //find size of queue
    cout<<"Size of Queue: "<<q.size()<<endl;


}

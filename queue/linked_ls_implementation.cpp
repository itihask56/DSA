#include<iostream>
using namespace std;

//Queue implementation using linkedlist
class Node{
    public:
    int data;
    Node *next; 
    Node(int value){
        data = value;
        next=NULL;
    }

};
class Queue{
    Node* front;
    Node* rear;
    public:


    Queue(){
        front=rear=NULL;

    }
    bool isEmpty(){
        return front==NULL;
    }

    void push(int data){
        if(isEmpty()){
            cout<<"Pushed "<<data<<" into the Queue"<<endl;
            front = new Node(data);
            rear=front;
            return;

        }
        else{
            rear->next = new Node(data);
            if(rear->next==NULL){
                cout<<"Queue Overflow\n"<<endl;
                return;
            }
            cout<<"Pushed "<<data<<" into the Queue"<<endl;
            rear=rear->next;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return ;
            // front=rear=NULL;
        }
        else{
            cout<<"Popped "<<front->data<<" from the Queue"<<endl;
            Node* temp = front ;
            front=front->next;
            delete temp;
        }
        
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }

};

void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    
    tail->next = temp;
    tail = temp;
}

void print(Node* head){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}


int main(){
    Node *head = new Node(10);
    Node *tail = head;
    insertAtEnd(tail,20);
    insertAtEnd(tail,30);
    insertAtEnd(tail,40);
    insertAtEnd(tail,50);
    print(head);
}
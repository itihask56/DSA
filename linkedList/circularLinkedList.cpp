#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element ,int d){
    //assuming that the element is present inthe list

    //empyt list
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty listt
        //assumin that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr=curr->next;

        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void print(Node* tail){
    Node* temp = tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
     
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
        
    }while(tail!=temp);
    cout<<"\n";
    
}

void deleteNode(Node* &tail,int element){
    //empty list

    if(tail==NULL){
        cout<<"List is empty,please check again...";
        return;
    }
    else{
        //non empty
        Node *prev = tail;
        Node *curr = prev->next;

        while(curr->data !=element){
            prev=curr;
            curr=curr->next;
        }

        prev->next = curr->next;

        if(curr == prev){
            tail = NULL;
        }
        else if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node* head){
    //empty case
    if(head==NULL){
        return true;
    }
    Node* temp= head->next;
    while(temp!=NULL &&  temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;

}

int main(){
    Node* tail = NULL;
    // //insert node in empty list
    // insertNode(tail,10,3);
    // print(tail);

    // insertNode(tail,3, 5);
    // print(tail);

    // insertNode(tail,5, 7);
    // print(tail);

    // // insertNode(tail,5, 10);
    // // print(tail);

    // deleteNode(tail,3);
    // print(tail);

    // deleteNode(tail,7);
    // print(tail);

    // deleteNode(tail,5);
    // print(tail);
    if(isCircular(tail)){
        cout<<"Linked list is cirular in nature"<<endl;
    }
    else{
        cout<<"Not a singly linked list"<<endl;
    }

    return 0;
}
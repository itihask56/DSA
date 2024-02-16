#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next !=NULL){
            delete next;
            next= NULL;
        }
        cout<<"Memory free for data "<<endl;
    }


};

// traversal of linked list
void print(Node* head){
    Node *ptr = head;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\n";
}


// get length of a linked list
int getLength(Node* head){
    int count =0;
    Node* ptr = head;

    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;
}

//insert at head

void insertAtHead(Node* &head, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    

}

void insertAtTail(Node* &tail,int d){
    if(tail ==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertAtPosition(Node* &tail, Node* &head,int d,int pos){
    //insert at start
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    
    
    Node* temp = head;
    int count = 1;

    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    //insert at last postion
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }


    Node* nodeToInsert = new Node(d);
    // while(count<pos-1){
    //     temp = temp->next;
    //     count++;
    // }
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp; 
       

}

void deleteNode(Node* &head,int position){

    if(position ==1){
         Node* temp = head;
   
        //1st step: make temp->next->prev = null
        temp->next->prev = NULL;

        //update the head
        head = temp->next;

        //mark temp->next =null
        temp->next = NULL;

        //free the memory
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
        
    }


}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    
    print(head);
    cout<<endl;
    cout<<getLength(head);
    cout<<endl;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    print(head);

    Node* tail = node1;
    insertAtTail(tail,50);
    print(head);

    insertAtPosition(tail,head,100,6);
    print(head);

    deleteNode(head,1);
    print(head);

}
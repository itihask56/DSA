#include<iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node (int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     tail = temp;

// }

// void insertAtHead(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// void print(Node* &head ){
//     Node *ptr = NULL;
//     ptr = head;

//     while(ptr!=NULL){
//         cout<<ptr->data<<" ";
//         ptr = ptr->next;
//     }
//     cout<<"\n";
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     Node* node1 = new Node(10);
   
//     Node *head= node1;
//     Node *tail = node1;
//     print(head);

//     // // insertAtHead(head,20);
//     // // insertAtHead(head,30);

    
//     insertAtTail(tail,20);
//     insertAtTail(tail,30);
//     print(head);

//     return 0;
// }


//Add node at the end of linked list

// class Node{
//     public:
//     int data;
//     Node* link;

//     // Node(int data){
//     //     this->data;
//     //     this->link = NULL;
//     // }
// };

// Node *add_at_end(Node* &head,int d){
//     Node *ptr = head;
//     Node *temp = new Node();
//     temp->data = d;
//     temp->link = NULL;

//     while(ptr!=NULL){
//         ptr = ptr->link;
//     }
//     ptr->link = temp;
// }
// int main(){
//     Node *head = new Node();
//     head->data = 10;
//     head->link = NULL;

//     Node *tail = new Node();
//     tail->data = 20;
//     tail->link = NULL;

//     head->link = tail;
//     Node *ptr;
//     ptr = add_at_end(head,30);
//     ptr = head;
   
//     while(ptr!=NULL){
//         cout<<ptr->data<<" ";
//         ptr= ptr->link;
//     }



//     return 0;
// }
 

class Node{
    public:
    int data;
    Node *link;

    Node(int data){
        this->data=data;
        this->link = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->link !=NULL){
            delete link;
            this->link = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;

    }
};

void insertAtEnd(Node* &tail,int d){
    
    Node* temp = new Node(d);
    tail->link = temp;
    tail=temp;


}

void insertAtBegning(Node* &tail,int d){
    Node *temp = new Node(d);
    temp->link = tail;
    tail = temp;
    
}

void print(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<"\n";
}

void insertAtPositon(Node* &head,int d,int pos){
    //insert at start

    if(pos==1){
        insertAtBegning(head,d);
        return;
    }
    Node *tempPtr = head;
    int count =1;
    while(count<pos-1){
        tempPtr=tempPtr->link;
        count++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->link = tempPtr->link;
    tempPtr->link=nodeToInsert;

}
//Delete first node of a linked list
void deleteFirstNode(Node* &head){

   
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        Node* ptr = head;
        head=head->link;
        free(ptr);
        ptr=NULL;
    }

}

//Delete last node of a linked list

void deleteLastNode(Node* &head){
    Node *temp=head;
    Node *temp2=head;
    if(head==NULL){
        cout<<"List is Empty"<<endl;
    }
    else{
        while(temp->link !=NULL){
            temp2 = temp;
            temp = temp->link;
            

        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }

    
}

void deleteNode(Node* &head,int pos){
    if(pos==1){
        Node *temp =head;
        head=head->link;
        temp->link = NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev = NULL;

        int count = 1;
        while(count<pos){
            prev=curr;
            curr=curr->link;
            count++;
        }
        prev->link=curr->link;
        curr->link=NULL;
        delete curr;
    }
}

int main(){
    Node *head = new Node(10);
    Node *tail = head;
    // print(head);
    // cout<<head->data<<endl;
    // cout<<head->link<<endl;
    insertAtEnd(tail,20);
    insertAtEnd(tail,30);
    insertAtEnd(tail,40);
    print(head);
    // insertAtBegning(tail,20);
    // insertAtBegning(tail,30);
    // print(tail);
    insertAtPositon(head,50,5);
    print(head);
    // deleteFirstNode(head);
    // print(head);
    // deleteLastNode(head);
    // print(head);

    deleteNode(head,3);
    print(head);
}



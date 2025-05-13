#include<iostream>
using namespace std;

//what is a linkedlist?
// A linkedlist is a sequensital(linear) data structure which is called nodes are 
//stored in non-contiguous memory location

//Each node consists of node and linked part:
//Data:actual value of the node
//pointer: address of the next node

class Node{
    public:
    int data;
    Node* next; //it is pointing to the next node

    Node(int d){
        data = d;
        next=NULL;
    }
};

void insert_at_start(Node* &head,int data){
   Node* temp = new Node(data);
   if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}


void insert_at_end(Node* &head,int data){
    Node* temp = new Node(data);

    if(head==NULL){
        head=temp;
    }
    else{
        // Node* tail = head;
        // while(tail->next!=NULL){
        //     tail=tail->next;
        // }
        // tail->next=temp;

        Node* tail = head;
        tail->next=temp;
        tail=tail->next;
 
    }
}
void display(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    
    //   //static creation of node
    // Node n1;
    // n1.data=10;
    // n1.next=NULL;


    //Dynamic creation of node
    Node *head=NULL;


    // insert_at_start(head,10);
    // insert_at_start(head,20);
    // insert_at_start(head,30);
    // display(head);

    //insert data using array;
    int arr[]={10,20,30,40,50};
    int size= sizeof(arr)/sizeof(arr[0]);

    // for(int i=0;i<size;i++){
    //     insert_at_start(head, arr[i]);
    // }
   
    insert_at_end(head,30);
    insert_at_start(head,10);
    insert_at_start(head,20);
    display(head);

  

}





 

// Node class representing each node of the linked list
// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructor
//     Node(int d) {
//         data = d;
//         next = NULL;
//     }
// };

// // LinkedList class to manage all linked list operations
// class LinkedList {
// public:
//     Node* head;

//     // Constructor (initializing head to NULL)
//     LinkedList() {
//         head = NULL;
//     }

//     // Function to insert a node at the start
//     void insert_at_start(int data) {
//         Node* temp = new Node(data);

//         if (head == NULL) {
//             head = temp;
//         } else {
//             temp->next = head;
//             head = temp;
//         }
//     }

//     // Function to display the linked list
//     void display() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     // Creating an object of LinkedList
//     LinkedList list;

//     // Inserting nodes using the object
//     list.insert_at_start(10);
//     list.insert_at_start(20);
//     list.insert_at_start(30);

//     // Displaying the linked list using the object
//     list.display();

//     return 0;
// }

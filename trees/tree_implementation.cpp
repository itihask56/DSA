#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};

int main(){
    int x,first,second;
    cout<<"Enter root Node:";
    cin>>x;
    queue <Node*>q; //queue will store the address
    Node* root = new Node(x);
    q.push(root);   //we are pushing the address of the node

    while(!q.empty()){
        Node* temp = q.front(); //now temp is pointing to the root node
        q.pop(); 
        cout<<"Enter left child node of "<<temp->data<<": ";
        cin>>first;//enter left node value

        //left node
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter right child node "<<temp->data<<": ";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
}
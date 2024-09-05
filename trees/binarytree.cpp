#include <bits/stdc++.h>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int value){
//         data = value;
//         left = NULL;
//         right =NULL;
//     }
// };

//using queue data structure
// int main(){
//     cout<<"Enter the root data...";
//     int x;
//     cin>>x;
//     Node *root = new Node(10);

//     queue<Node*>q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
        
//         cout<<"Enter left child of "<<temp->data<<": ";
//         int first;
//         cin>>first;  //left child

//         if(first !=-1){
//             temp->left = new Node(first);
//             q.push(temp->left);
             
//         }

//         cout<<"Enter riht child of "<<temp->data<<": ";
//         int second;
//         cin>>second; //right child
        
//         if(second != -1){
//             temp->right = new Node(second);
//             q.push(temp->right);
//         }
 
    

//     }
// }

//1 create Node class and initialize
// create tree
// initialize x, check condition if x == -1 ,don't create hode

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
        data = value;
        left = NULL;
        right =NULL;
    }
};

Node* BinaryTree(){
    int x;
    cin>>x;

    if(x==-1){
        return NULL;
    }

    Node *temp = new Node(x);

    //left side
    cout<<"Enter the left child of "<<x<<" :";
    temp->left = BinaryTree();

    //right side
    cout<<"Enter the right child of "<<x<<" :";
    temp->right=BinaryTree();

    return temp;

}
void Preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";

    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root){
    if(root == NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void Inorder(Node *root){
    if(root==NULL){
        return ;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}


void LevelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){
    cout<<"Enter the root node: ";
    Node *root;
    root =BinaryTree();
    cout<<"\nPreorder: ";
    Preorder(root);

    cout<<"\nPostorder: ";
    Postorder(root);

    cout<<"\nInorder: ";
    Inorder(root);

    cout<<"\nLevel Order: ";
    LevelOrderTraversal(root);

}
 


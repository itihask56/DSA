#include<iostream>
#include<queue>
using namespace std;

 

//calculating size by level order
int calculateSize(Node *root){
    int count=0;
    queue<Node*>q;
    q.push(root);

    Node* temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        count++;
        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

//calculate size by preorder traversal
//same approach will be valid for other traversal as well

int preorderSize(Node* root,int &count){
    if(root==NULL){
        return 0;
    }
    count++;
    preorderSize(root->left,count);
    preorderSize(root->right,count);
}

//calculate size by calculating size of left subtree + size of right subtree

int getSize(Node* root){
    if(root==NULL){
        return;
    }
    return 1+ getSize(root->left)+getSize(root->right);
}
 


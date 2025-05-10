#include<iostream>
using namespace std;
//create class of stack 
//stack can be created from array or linkedlist
//take size of arry
//top pointer to keep track state of stack
//constructor to initilize the stack


class Stack{
    public:
    int *arr;
    int size;
    int top;

    // In C++, this is a pointer to the current object.
    // So, to access members through it, you must use the -> operator:

    Stack(int size){
        this->top=-1;
        this->size=size;
        arr = new int[size];
    }


    void push(int data){
        //check wheather stack is full 
        if(top==size-1){
            cout<<"Stack Overflow:"<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }

    bool is_empty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
    int pop(){
        //check wheather the stack is empty or not
        if(top==-1){
            cout<<"Stack Underflow "<<endl;
            //throw runtime_error("Stack Underflow! Cannot pop from an empty stack.");
            return -1;
        }
        else{
            int data = arr[top];
            top--;
            return data;
        }

    }

    int peek(){
        //check wheather stack is empty;
        if(is_empty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }

    }
};


int main(){
    Stack st(3);
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<<"Peak Data: "<<st.peek()<<endl;
    // st.push(40);
    cout<<st.is_empty();
    
    
}
 
#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        int top = -1;


    }

    void push(int element){
        //check size is avilable or not

        if(size-top >1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow !!"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow !! "<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    
};

int main(){

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.peek()<<endl;//40
    st.pop(); //-40
    cout<<st.peek()<<endl;//30
    cout<<st.size<<endl; //5
    st.push(50); 
    st.push(60);
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;




    // stack<int>s;

    // //push
    // s.push(2);
    // s.push(3);

    // //pop
    // s.pop();
    // cout<<"Printing top element "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"Stack is empty";
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }

    // return 0;
}

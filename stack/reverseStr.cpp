#include<iostream>
#include<stack>

using namespace std;

// class Stack{
//     public:
//     int size;
//     int top;
//     int *arr;

//     Stack(int element){
//         this->size = size;
//         top = -1;
//         arr = new int[size];
//     }

//     void push(int element){
//         if(size-top>1){
//             top++;
//             arr[top]=element;
//         }
//     }
// };

int main(){
    string str = "love";
    stack<char>s;

    for(int i =0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Ans is-> "<<ans;
}
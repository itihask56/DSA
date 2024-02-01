#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    if(toLowerCase(name[s])!=toLowerCase(name[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    // char name[20];
    // cout<<"Enter your name: "<<endl;
    // cin>>name;// i/p Itihas verma
    // cout<<"Your name is: "<<name; //Itihas /0 is a termination character
    // int len = getLength(name);
    // cout<<"\nLenght of string is: "<<len;
   
    // reverse(name,len);
    // cout<<"After reverse function: "<<name;

    // if(checkPalindrome(name,len)){
    //     cout<<"\nPalindrome string"<<endl;
    // }
    // else{
    //     cout<<"\nNot a palindrome"<<endl;
    // }
    cout<<toLowerCase('S')<<endl;
    cout<<toLowerCase('1')<<endl;


    

}
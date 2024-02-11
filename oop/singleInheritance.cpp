#include<iostream>
using namespace std;

class Animal{
    public:
    int legs;
    int tail;

    void speak(){
        cout<<"Speaking"<<endl;
    }
    void run(){
        cout<<"Animal can run"<<endl;
    }
};

//signle inheritance

class Dog:public Animal{

    public:

    void isPet(){
        cout<<"Dog is a pet Animal"<<endl;
    }
};

int main(){

    Dog d1;
    d1.isPet();
    d1.run();

}
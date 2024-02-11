#include<iostream>
using namespace std;

class Human{
    public:

    int height;
    int weight;
    // private:
    int age;

    public:

        void setWeight(int w){
            this->weight=w;
        }
        int getAge(){
            return this->age;
        }

};

class Male: protected Human{
        public:
        string color;

        void sleep(){
            cout<<"Male is sleeping";
        }
        int getHealth(){
            return this->height;
        }

        int getHeight(){
            return this->height;
        }
       

};


int main(){
    Male m1;
    cout<<m1.getHeight()<<endl;

     







    // cout<<m1.age<<endl;
    // cout<<m1.height<<endl;
    // cout<<m1.weight<<endl;

    // cout<<m1.color<<endl;
    // m1.sleep();
    // cout<<endl;
    // m1.setWeight(54);
    // cout<<m1.weight;

}
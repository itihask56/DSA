#include<iostream>
using namespace std;

class Human{
    public:

    int height;
    int weight;
    private:
    int age;

    public:

        void setWeight(int w){
            return this->weight;
        }
        int getAge(){
            return this->age;
        }

};

class Male: public Human{
        public:
        string color;

        void sleep(){
            cout<<"Male is sleeping";
        }
        int getHealth(){
            return this->height;
        }

};x


int main(){
    Male m1;
    cout<<m1.age<<endl;

}
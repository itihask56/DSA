#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    // char level;

    public:
    char level;

    Hero(int health){
        cout<<"Constructor is called"<<endl;
        this->health=health;
        cout<<"Health: "<<health<<endl;
    }

    Hero(int helath,char level){
        this->level = level;
        this->health = helath;

    }

    //copy constructor
    
     
    void print(){
        cout<<"Level: "<<this->level<<endl;
        cout<<"Health: "<<this->health<<endl;
    }

// getter and setter function is used to access and set data of private member variables outise the class
// get and set function is also is used to access and set data of public outside the class as it also a simple function;

    void setHealth(int h){
         health = h;
    }
     void setLevel(char ch){
        level =ch;
    }
    
    int getHealth(){
        return health;
    }
   
    char getLevel(){
        return level;
    }

};

int main(){


    Hero S(30,'C');
    S.print();

    //copying a constructor
    Hero R(S);
    S.print();









    //constructor is called instantly when an object is created

    // Hero bharat(80); //object can be initialized at the time of creation

    // Hero bhim(90,'A');
    // cout<<"Level is: "<<bhim.level<<endl;
    // cout<<"Health is : "<<bhim.getHealth()<<endl;
    
   














    /*
    //creating a object staticly
    Hero ram;
    ram.setLevel('A');
    ram.setHealth(70);
    cout<<"Level is: "<<ram.level<<endl;
    cout<<" Health is : "<<ram.getHealth()<<endl;

    //dynamic allocation
    Hero *lakshman = new Hero;
    lakshman->setHealth(70);
    lakshman->setLevel('A');
   
    cout<<"Level is: "<<(*lakshman).level<<endl; // value can also be accessed by dereferencing the variable
    cout<<"Health is : "<<(*lakshman).getHealth()<<endl;
    cout<<"Level is: "<<lakshman->level<<endl;
    cout<<"Health is : "<<lakshman->getHealth()<<endl;

 */



}
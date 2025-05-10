#include <iostream>
using namespace std;
// //Queue Implementation using Array
// //Queue is a FIFO data structure
// //Queue is a linear data structure
// //Queue is a data structure that stores data in a linear order



// class Queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     Queue(int n){
//         arr = new int[n];
//         size=n;
//         front=rear=-1;
       
//     }

//     bool isEmpty(){
//         return front ==-1;
//     }

//     bool isFull(){
//         return rear==size-1;
//     }
//     void push(int data){
//         if(isEmpty()){
//             cout<<"Pushed "<<data<<" in queue\n";
//             front = rear=0;
//             arr[0]=data;
//             return;
//         }
//         else if(isFull()){
//             cout<<"Queue is Overflow\n";
//             return ;
//          }
//           else{
          
//             rear++;
//             arr[rear]=data;
//             cout<<"Pushed "<<data<<" in queue\n";
//          }
         

         
        
//     }
//     void pop(){
//         //Empty Queue
//         if(isEmpty()){
//             cout<<"Queue Underflow";
//             return;
//         }
//         //pop kar do
//         else{
//            if(front==rear){
//             cout<<"Popped "<<arr[front]<<" from queue\n";
//             front = rear = -1; 

//            }
//            else{
//             cout<<"Popped "<<arr[front]<<" from queue\n";
//             front++;
//            }
           
//         }
        
        

//     }

//     int start(){
//         if(isEmpty()){
//             cout<<"Queue is Empty\n";
//             return -1;
//         }
//          else{
//             cout<<"Front element is "<<arr[front]<<endl;;
//             return arr[front];
//          }
//     }
// };

// int main(){
//     Queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60); //queue overflow
//     q.start(); //front element
//     q.pop();
//     q.pop();
//     q.pop();
//     q.pop();
//     q.pop();
//     q.pop(); //queue underflow
//     q.start(); //front element
 

// }




// implementation of circular queue
#include <iostream>
using namespace std;
// //Queue Implementation using Array
// //Queue is a FIFO data structure
// //Queue is a linear data structure
// //Queue is a data structure that stores data in a linear order



class Queue{
    public:
    int *arr;
    int front,rear,size;

    Queue(int n){
        arr = new int[n];
        size=n;
        front=rear=-1;
       
    }

    bool isEmpty(){
        return front ==-1;
    }

    bool isFull(){
        return (rear+1)%size==front;
    }
    void push(int data){
        if(isEmpty()){
            cout<<"Pushed "<<data<<" in queue\n";
            front = rear=0;
            arr[0]=data;
            return;
        }
        else if(isFull()){
            cout<<"Queue is Overflow\n";
            return ;
         }
          else{
          
            rear=(rear+1)%size;
       
            arr[rear]=data;
            cout<<"Pushed "<<data<<" in queue\n";
         }
         

         
        
    }
    void pop(){
        //Empty Queue
        if(isEmpty()){
            cout<<"Queue Underflow";
            return;
        }
        //pop kar do
        else{
           if(front==rear){
            cout<<"Popped "<<arr[front]<<" from queue\n";
            front = rear = -1; 

           }
           else{
            cout<<"Popped "<<arr[front]<<" from queue\n";
            front=(front+1)%size;
           }
           
        }
        
        

    }

    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty\n";
            return -1;
        }
         else{
            cout<<"Front element is "<<arr[front]<<endl;;
            return arr[front];
         }
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); //queue overflow
    
    q.pop();
    q.push(60);
    q.push(70);
     
}
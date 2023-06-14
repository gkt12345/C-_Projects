#include<iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // cunstructor frunction
    CircularQueue(int size){
        front = rear = -1;
        this->size = size;
        arr = new int[size];
    }

    // check if Queue is empty
    bool empty(){
        return front==-1 && rear==-1;
    }

    // check if Queue is full
    bool isFull(){
        return front == (rear+1)%size;
    }

    // Push data in Queue   
    void push(int data){
         if(empty()){
            front = rear = 0;
            arr[rear] = data;
            return;
         }
         else if(isFull()){
            cout<<"Queue is Full\n";
            return; 
         }
         else{
            rear = (rear+1)%size;
             arr[rear] = data;
             return;
         }         
    }

    // Pop data in Queue
    void pop(){
        if(empty()){
            cout<<"Queue is empty\n";
            return;
        }
        else if(front == rear){
             cout<<"You delete "<<arr[front]<<endl;
             front = rear = -1;
             return;   
        }
        else{
            cout<<"You delete "<<arr[front]<<endl;
            front = (front+1)%size;
            return;
        }
    }  

};

int main()
{
    CircularQueue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.isFull()<<endl;
    cout<<q.empty()<<endl;










}
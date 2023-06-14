#include<iostream>
using namespace std;

class Queue
{
    int front;
    int rear;
    int *arr;
    int size;

    public:
    Queue(int size){
        front = rear = 0;
        this->size = size;
        arr = new int[size];
    }
    // push element in queue
    void push(int data){
        if(rear == size){
            cout<<"Queue is Full\n";
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    // Pop element from queue.
    void pop(){
        if(front == rear){
            cout<<"Queue is empty";
            return;           
        }
        else{
            front++;
        }
    }    

    // is Empty
    bool empty(){
        return front==rear;
    }

     // front
     int frontElmnt(){
        return arr[front];
     }

     // front
     int rearElmnt(){
        return arr[rear];
     }  
};

int main()
{
    Queue q(5);
    q.push(15);
    q.push(95);
    q.push(75);
    q.push(25);
    q.push(35);
    q.push(35);
    q.pop();
    q.pop();
}













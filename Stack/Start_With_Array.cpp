#include<iostream>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int size;

    public:
    Stack(int s){
        arr = new int[s];
        top = -1;
        size = s;
    };

    // Push element in Stack
    void push(int data){
        if(top == size-1){
            cout<<"Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = data;
    };

    // Pop element from Stack
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow\n";
            return; 
        }
    
        top--;
        return;
    }; 

    // check top element
    int peak(){
        if(top == -1){
            cout<<"Stack Underflow";
            return -1;
        }
        return arr[top];
    };

    bool empty(){
        return top==-1;
    };

};

int main()
{
    Stack s(4);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.peak()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peak()<<endl;
    cout<<s.empty()<<endl;
}















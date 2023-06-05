#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    };
};

class Stack
{
    Node *top;

    public:
    Stack(){
        top = NULL;
    };

    // Push element
    void push(int data){
        Node *temp = new Node(data);

        if(!temp){
            cout<<"Stack Overflow\n";
            return;
        }

        temp->next = top;
        top = temp;
    };

    // delete element
    void pop(){
        if(!top){
            cout<<"Stack Underflow\n";
            return;
        }

        Node *temp =top;
        top = top->next;
        delete temp;
    };

    // top element
    int peak(){
        if(!top){
            cout<<"Stack is empty\n";
        }
        return top->data;
    };

    bool empty(){
        return top == NULL;
    };

};

int main()
{
    Stack s;
    s.push(10);
    s.push(80);
    s.push(60);
    s.push(50);
    s.push(20); 
    cout<<s.peak()<<endl;
    s.pop();
    s.pop();
    cout<<s.peak()<<endl;
    cout<<s.empty()<<endl;
}





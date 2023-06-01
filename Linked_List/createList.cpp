#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;   
};

// print list
void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    // create a arr of n size
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Node *head = new Node;   // create head node
    head->data = arr[0];     // insert value in head data
    Node *temp = head;      // create a pointer temp
    
    // insert all value of arr in list
    for(int i=1; i<n; i++){
        temp->next = new Node;  // create a new node
        temp = temp->next;    // point temp to new node
        temp->data = arr[i];  // insert data in new node
    }
    
    temp->next = NULL;  // set null val in last node address
    
    print(head);   // function for print list

    return 0;
}
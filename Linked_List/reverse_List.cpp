#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;   
};

// // Reverse List from recursion
// void reverse_List(Node *head){
//     if(head == NULL){
//         return;
//     }
//     reverse_List(head->next);
//     cout<<head->data<<" ";
// } 


// Reverse List from loop 
void reverse_List(Node *head){
    Node *prev = NULL;
    Node *forwrd;
    
    while(head != NULL){
        forwrd = head->next;
        head->next = prev;
        prev = head;
        head = forwrd;
    }

    // print list
    while(prev != NULL){
        cout<<prev->data<<" ";
        prev = prev->next;
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
    
    // insert all value of arr in linkdlist
    for(int i=1; i<n; i++){
        temp->next = new Node;  // create a new node
        temp = temp->next;    // point temp to new node
        temp->data = arr[i];  // insert data in new node
    }
    
    temp->next = NULL;  // set null val in last node address

    reverse_List(head);
    

    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*// create max heap
    priority_queue<int>p;
    p.push(4);
    p.push(3);
    p.push(1);
    p.push(7);
    p.push(9);
    cout<<"max is: "<<p.top() <<endl;
    cout<<"size is: "<<p.size() <<endl;
    p.pop();
    p.pop();
    cout<<"size is: "<<p.size() <<endl;
    cout<<"max is: "<<p.top() <<endl; */

    // create min heap
    priority_queue<int, vector<int>, greater<int> >p;
    p.push(4);
    p.push(3);
    p.push(1);
    p.push(7);
    p.push(9);
    cout<<"min is: "<<p.top() <<endl;
    cout<<"size is: "<<p.size() <<endl;
    p.pop();
    p.pop();
    cout<<"size is: "<<p.size() <<endl;
    cout<<"min is: "<<p.top() <<endl; 

}
#include<iostream>
using namespace std;

class Car
{
    int cost;
    int mileage;
    
    public:
    Car() // constructor function
    {
        cost = 2000;
        mileage = 10;
        cout<<"Hello Constuctor"<<endl;    
    };
};

int main(){
    Car obj;
    cout<<sizeof(obj)<<endl; // size of object
}
#include<iostream>
using namespace std;

class Bank
{
    public:

    int balance;
    string name;
    string branch;

    void check_balance(){
        cout<<balance<<" " <<endl; 
    }

    void withdraw(){
        balance -= 100;
        cout<<"100 rs nikal gaye" <<endl;
    }
    
};

int main(){
    Bank obj;
    obj.balance = 500;
    obj.name = "gaurav";
    
    obj.check_balance();
    obj.withdraw();
    obj.check_balance();
    
    return 0;
}
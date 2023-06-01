#include<iostream>
using namespace std;

class Bank
{
    int amount;
    string Name;
    public:
     
     // function for set value int private variables
    void setValue(int balance, string person){
        amount = balance;
        Name = person;
    }
    
    // for balance 
    void check_Balance(){
        cout<<"Name: "<<Name <<", ";
        cout<<"amount: "<<amount<<endl;
        
    }

    // for withdraw
    void withdraw(int deduct_Amount){
        if(amount < deduct_Amount){
            cout<<"Bhai balance "<<amount<<" hai aur tu nikal raha hai "<<deduct_Amount<<endl;
            return;
        }
        amount -= deduct_Amount;
        cout<<deduct_Amount<<" rs nikal liye"<<endl;
    }

};

int main()
{
    Bank obj;
    obj.setValue(5000, "Gaurav");
    obj.check_Balance(); // balnce check fun
    obj.withdraw(5100);  // withdraw fun
    obj.check_Balance();
}


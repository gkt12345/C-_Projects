#include<iostream>
using namespace std;

int main()
{
int num ;
cin>>num;
int sum = 0;
int pow = 1;
while(num)
{
   int rem = num % 10; 
       sum += rem * pow;  
       num = num / 10;  
       pow = pow * 2;  
}

    cout<<sum;

}
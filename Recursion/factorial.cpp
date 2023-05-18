#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1)
    return 1;

    return num*factorial(num-1);

    // int n = factorial(num-1);
    // num = num * n;
    // return num;
    
}

int main()
{
    int num;
    cin>>num;
    cout<<factorial(num);
}
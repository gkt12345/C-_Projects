#include<iostream>
using namespace std;

void isPrime(int num){
    if(num<2)
    return;

    for(int i=2; i<=num-1; i++){
        if(num % i == 0)
            return;   
    }
    cout<<num<<" ";
    return;
}

int main()
{
    int arr[6] = {6,-7,8,11,5,8};
    
    for(int i=0; i<=5; i++){
        isPrime(arr[i]);
    }
    return 0;
}

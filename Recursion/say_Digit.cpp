#include<iostream>
using namespace std;

void sayDigit(int n, string str[]){
    if(n == 0 )
        return;
    
        int digit = n%10;
        n = n/10;
        // cout<<str[digit]<<" ";  // reverse no in digits
        sayDigit(n, str);
        cout<<str[digit]<<" ";  // same no in digits       
        
}
int main()
{
    string str[10] = {"zero" , "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    sayDigit(n, str);
}
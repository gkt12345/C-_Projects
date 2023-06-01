#include <iostream>
using namespace std;

// fibonaciSeries:=  0 1 1 2 3 5 8 13 21

int fibonaciSeries(int n){
    // base case 
    if(n==0)
     return 0;
    if(n==1)
     return 1;

    int ans = fibonaciSeries(n-1)+fibonaciSeries(n-2);  
    return ans;
}

int main()
{
    int num = 8;    
    cout<<fibonaciSeries(num);
}    
#include<iostream>
using namespace std;
// 5666666*566666*5666666*566666*5666666*5666666 big number
// if odd power 20^40 we can break it like: (20^20 * 20^20) => (20*20)^20  
// if even power 20^41 we can break it like: (20^20 * 20^20 * 20)  =>>    (400^20)*20 
long powerOfNum(long num, long p)
{
     if(p == 0)
     return 1;

     long ans = powerOfNum(num, p/2);
        ans = (ans*ans)%1000000007;

    if(p % 2 == 0)
        return  ans % 1000000007;
    else
        return (ans*num)%1000000007;     
}

int main()
{
    long num=14, power=41;
    // int modulor = 1000000007;
    // cin>>num;
    // cin>>power;
    cout<<powerOfNum(num, power);
}
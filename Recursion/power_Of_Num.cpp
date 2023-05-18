#include<iostream>
using namespace std;
// 2*2*2
int powerOfNum(int num, int p)
{
     if(p == 0)
     return 1;

     int ans = num * powerOfNum(num, p-1);
     return ans;   
}

int main()
{
    int num;
    int power;
    cin>>num;
    cin>>power;
    cout<<powerOfNum(num, power);
}
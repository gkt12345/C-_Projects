#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // create pair

    /* 1st way
    pair<int, int>p; 
    p.first = 12;
    p.second = 13;
    cout<<p.first<<" "<<p.second;
    */

   // 2nd way
//    pair<int, int>p;
//    p = make_pair(10, 20);
//    cout<<p.first<<" "<<p.second;


   // pair for 3 element 
   pair<int, pair<int, int> >p3;
   p3.first = 10;
   p3.second.first = 20;
   p3.second.second = 30;

   cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl; 
    // copy data 
    pair<int, int>p1;
    p1 = make_pair(10, 20);

    pair<int, int>p2;
    p2 = p1;

    cout<<p2.first<<" "<<p2.second;

    return 0;
}
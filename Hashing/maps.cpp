#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, int>m;
    
    //insert the data
    m[3] = 93;
    m[2] = 3;
    m[9] = 10;
    m[10] = 0;

    //count fun for find key exist or not.
    // cout<<m.count(10) <<" "<<m.count(11);

    // print value 
    // cout<<m[5]<<endl;

    for(auto i=m.begin(); i!=m.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    
    return 0;
}


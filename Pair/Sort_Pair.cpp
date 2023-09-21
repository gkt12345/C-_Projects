#include<iostream>
#include<vector>
#include <algorithm>  // for avoiding sorting error
using namespace std;

bool sort_Ascending_Second(pair<int, int>a, pair<int, int>b)
{
    return a.second < b.second;
}

bool sort_Descending_Second(pair<int, int>a, pair<int, int>b)
{
    return a.second > b.second;
}

bool sort_Ascending_Second_Fist(pair<int, int>a, pair<int, int>b)
{
    return (a.second < b.second || (a.second==b.second && a.first<b.first) );
}

int main()
{
    // create pair array
    vector<pair<int, int> >v;
    
    // insert pair in array
    v.push_back(make_pair(10, 15));
    v.push_back(make_pair(30, 45));
    v.push_back(make_pair(4, 6));
    v.push_back(make_pair(4, 9));
    v.push_back(make_pair(3, 6));
    v.push_back(make_pair(15, 15));
    v.push_back(make_pair(88, 1));

    // sort ascending order on the bases of first
    // sort(v.begin(), v.end());

    // sort discending order on the bases of first
    // sort(v.rbegin(), v.rend());
    
    
    // sort ascending order on the bases of second
    // sort(v.begin(), v.end(), sort_Ascending_Second);
    
    // sort descending order on the bases of second
    // sort(v.begin(), v.end(), sort_Descending_Second);
    
    // sort ascending order on the bases of second
    // if second is equal then it compare first also
    sort(v.begin(), v.end(), sort_Ascending_Second_Fist);
    
    
    // print sorted pair arr
    for (int i = 0; i < v.size(); i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    



    return 0;
}
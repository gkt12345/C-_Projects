// search insert position.
// leetcode

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter size of arr : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array Elements :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Please enter target : ";
    cin>>target;


    int mid, s=0, e=n-1, index=-1;
    // left arr
    while(s <= e){
         mid = (s+e) / 2;
         if(arr[mid] == target){
            cout<< mid;
            return 0;
         }
         else if(arr[mid] > target){
              e = mid-1;
              index = mid;  
         }
         else{
            s = mid+1;
            index = mid+1;
         }
    }
    cout<<index;
    return 0;

}

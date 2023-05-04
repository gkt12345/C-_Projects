// peak index in a mountain array
// leetcode

#include<iostream>
using namespace std;

int main()
{   // ans is 8 here becuse 5<8>7.
    int arr[9] = {2,3,4,6,8,7,6,3,2};
    int s=0, e = 9-1;
    while(s <= e){
       int mid = (s+e) / 2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            cout<<mid;
            break;
        }   
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1])
               s = mid+1; 
        else if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]) 
            e = mid-1;   
    }
    return 0;
}
// https://www.techiedelight.com/find-smallest-missing-element-sorted-array/
// find the smallest missing element in sorted arr.

#include<iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {0, 1, 2, 3, 8, 11, 15};
    int s=0, e=n-1, mid, index;

    // O(log(n)) times

    while(s < e){
        mid =  (e + s) / 2;
        
        if(arr[mid] > mid){
            e = mid-1;
            index = mid-1;
        }
        else{
            s = mid+1;
            index = mid+1;
        }
    }

    cout<< index;


    /* // this aproach will take O(N) time 
    for(int i=0; i<n; i++){
        // if index no is not equal to element 
        // that will be our ans.
        if(arr[i] != i){
             cout<<i;
             break;   
        }
    } */
    

    return 0;
}
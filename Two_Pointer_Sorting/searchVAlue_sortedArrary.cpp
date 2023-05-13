#include<iostream>
using namespace std;

// find any two value that's sum is equal to k.

int main()
{   int n = 6;
    int arr[n] = {1, 4, 5, 7, 8, 11};
    int k = 13;

    int i=0, j=n-1, sum=0;

    while(i < j){
        sum = arr[i] + arr[j];
        if(sum == k){
            cout<<i<<" "<<j;
            break;
        }
        else if(sum > k ){
             j--;   
        }else{
            i++;
        }
    }
}
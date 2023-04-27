#include<iostream>
using namespace std;

int main()
{
    // find missing element in arr = [1,2,3,5,6]; n=6;
    // Missing Element = 4;
    // Solution: formula is (n*(n+1))/2 for sum of n numbers;
    // sum - sum of given arr

    int n=6;
    int arr[] = {1,2,3,5,6}; 
    
    int total = (n * (n+1)) / 2;
    int sum = 0;

    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }

    cout<< total-sum;


}
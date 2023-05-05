// https://practice.geeksforgeeks.org/problems/rotation4723/1
// Given an ascending sorted rotated array Arr of distinct integers of size N.
// The array is right rotated K times. Find the value of K.

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {5, 1, 2, 3, 4};

     
    
    return 0;
}










// int main()
// {
//     int n = 5;
//     int arr[n] = {5, 1, 2, 3, 4};

//      // this will take O(n) time.
//         int max=arr[0], indx=0;
//         for(int i=1; i<n; i++){
//             // find index of maximum elemnt
//             if(max < arr[i]){
//                 max = arr[i];
//                 indx = i;
//             }
//         }
//         if(indx == n-1){
//             cout<<0;
//         }else{
//             cout<< indx+1;
//         }
    
//     return 0;
// }
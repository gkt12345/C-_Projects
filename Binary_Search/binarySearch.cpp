#include<iostream>
using namespace std;
// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=4&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Arrays&category[]=Sorting&category[]=Searching&sortBy=submissions
int main()
{  
    int n = 7;
    int arr[n] = {8, 10, 12, 22, 27, 35, 38};
    int k = 27;

    int start = 0;
    int end = n;
    
    while(start <= end){
        // mid point; 
        int mid = (start+end)/2;

        if(arr[mid] == k){
            // ans
            cout<<mid;
            return 0;
        }
        // k is not found and k is less then arr[mid]
        // here we search in first to mid-1
        else if(arr[mid] > k){
            end = mid - 1;
        }
        // if not found and k is greater than arr[mid]
        // we search in mid+1 to end;
        else{
            start = mid + 1;
        }
    }
        cout<<"Not present";
        return 0;
};
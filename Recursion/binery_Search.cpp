#include<iostream>
using namespace std;

int binery_Search(int *arr, int start, int end, int key){
   
    if(start > end)
        return 0;
    
    int mid = end + (start - end)/2;

    if(arr[mid] == key)
        return 1;

    else if(arr[mid] > key)
        return binery_Search(arr, start, mid-1, key);
    else 
        return binery_Search(arr, mid+1, end, key);           
}

int main(){
    int n = 5;
    int arr[n] = {1, 3, 4, 15, 19};
    int key = 15;
    cout<<binery_Search(arr, 0, n-1, key);
       
    return 0;
}
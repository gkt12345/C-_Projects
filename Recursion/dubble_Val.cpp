#include<iostream>
using namespace std;

void search_key(int *arr, int size){
    if(size==0)
    return;
    
   arr[0] *= 2;
   search_key(arr+1, size-1);
}

int main(){
    int n = 5;
    int arr[n] = {6, 7, 2, 1, 5};
    
    search_key(arr, n);
    
    // print arr
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
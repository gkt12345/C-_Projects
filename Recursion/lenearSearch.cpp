#include<iostream>
using namespace std;

int search_key(int *arr, int size, int key){
    if(size==0)
    return 0;
    
    if(key==arr[0])
        return 1;

    return search_key(arr+1, size-1, key);
}

int main(){
    int n = 6;
    int arr[n] = {6, 7, 2, 1, 5};
    int key = 5;
    cout<<search_key(arr, n, key);

    return 0;
}
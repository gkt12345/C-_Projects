#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h){
    int *ans = new int[h-l+1];
    int i=l, j=mid+1, k=0;

    while(i<=mid && j<=h){
        if(arr[i] <= arr[j]){
            ans[k++] = arr[i++];
        }else{
            ans[k++] = arr[j++];
        }
    }

    while(i<=mid)
        ans[k++] = arr[i++];

    while(j<=h)
        ans[k++] = arr[j++];

    int indx = l;
    k=0;

    while(indx <= h){
        arr[indx++] = ans[k++];
    }

    delete []ans;            
}

void merge_Sort(int arr[], int l, int h){
    if(l >= h)
    return;
    
    int mid = l + (h-l)/2;
    merge_Sort(arr, l, mid);
    merge_Sort(arr, mid+1, h);
    merge(arr, l, mid, h);
}

int main(){
    int n = 5;
    int *arr = new int[n]{6, 7, 2, 1, 5};
    int start = 0, end = n-1;
    merge_Sort(arr, start, end);

    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
    } 
    
    delete []arr;

    return 0;
}
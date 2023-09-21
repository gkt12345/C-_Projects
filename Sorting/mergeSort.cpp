#include<iostream>
using namespace std;

/* // in this aproach we take a new array ans
// first we copy sorted value from old arr to new ans arr
// then copy sorted ans arr in old arr and at last delete ans 
void merge(int arr[], int s, int m, int e){
    int *ans = new int[e-s+1];
    int i=s, j=m+1, k=0;
    while(i<=m && j<=e){
        if(arr[i] <= arr[j])
            ans[k++] = arr[i++];
        else    
            ans[k++] = arr[j++];     
    }
    while(i<=m){
        ans[k++] = arr[i++];
    }
    while(j<=e){
        ans[k++] = arr[j++];
    }
    i = s, k=0;
    while(i <= e){
        arr[i++] = ans[k++];
    }
    
    delete []ans;
} */



// make two new array for left and right part
// copy old array value in both array
// copy sorted value in old array from left and right array
void merge(int arr[], int s, int m, int e){
      // both new array lenght
      int n1 = m-s+1, n2 = e-m;
      // create array
      int left[n1], right[n2];
      // copy value in both array
      for(int i=0; i<n1; i++){
          left[i] = arr[s+i];  
      }
      for(int i=0; i<n2; i++){
         right[i] = arr[m+1+i];
      }

      // push sorted element in old array
      int i=0, j=0, k=s;
      while(i<n1 && j<n2){
           if(left[i] <= right[i])
               arr[k++] = left[i++];
            else
                arr[k++] = right[j++];     
      }
      while(i<n1)
        arr[k++] = left[i++];
      while(j<n2)
        arr[k++] = right[j++];    
}



void mergeSort(int arr[], int s, int e){
    if(s >= e)
        return;

    int m = s +(e-s)/2;
    //sort left part
    mergeSort(arr, s, m);
    //sort right part
    mergeSort(arr, m+1, e);
    // merge array
    
    merge(arr, s, m, e);
}

int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
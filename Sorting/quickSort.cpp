#include<iostream>
using namespace std;

int findPivot(int arr[], int s, int e){
     int pivot = arr[s];
     int count = 0;
     // count element which are small or equal to pivot
     for(int i=s+1; i<=e; i++){
          if(arr[i] <= pivot)
            count++;  
     }

     // swap pivot index with its correct positon
     int pivotIndex = count+s;
     swap(arr[s], arr[pivotIndex]);   

     // swap eleemnt if left side greater then pivot to right side less then pivot   
     int i=s, j=e;
     while(i<pivotIndex && j>pivotIndex){
          while(arr[i] <= pivot )
               i++;
          while(arr[j] > pivot)
                j--;
          if(i > pivotIndex && j < pivotIndex){
            swap(arr[i++], arr[j--]);
          }              
     }
        return pivotIndex;
}

void  quickSort(int arr[], int s, int e){
    if(s >= e)
        return;

    int p = findPivot(arr, s, e);
    // left part
     quickSort(arr, s, p-1);
     // right part
     quickSort(arr, p+1, e);

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

    quickSort(arr, 0, n-1);

    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
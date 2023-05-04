#include<iostream>
using namespace std;

int main()
{
    int n = 5, arr1[] = {1, 2, 3, 4, 5};  
    int m = 3, arr2 [] = {1, 2, 3};
    int k=0;
    int arr3[k];

    int i=0, j=0;

    while(i<n || j<m){
          if(arr1[i] <= arr2[j] && arr3[k] != arr1[i]){
                arr3[k] = arr1[i];
                k++;
                i++;
          }
          else if(arr1[j] <= arr2[i] && arr3[k] != arr2[j]){
                arr3[k] = arr2[j];
                k++;
                j++;
          }
        //   else{
        //         i++;
        //         j++;
        //   }    
    }
    while(i < n){
           if(arr3[k] != arr1[i]){
                arr3[k] = arr1[i];
                k++;
                i++;
          }
          else
            i++; 
    }
    while(j < m){
           if(arr3[k] != arr2[j]){
                arr3[k] = arr2[j];
                k++;
                j++;
          } 
          else
            j++;
    }

    for(int l=0; l<k; l++){
        cout<<arr3[i]<<" ";
    }
}
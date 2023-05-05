#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions
// given 2 sorted arr task is merge both array with remove duplicates.
// aproach
// first we have to merge both array in new arr with 2 pointer sorting
//  we have to remove duplicates while copying these array into new array. 
// and last print new arr.

void arrayMerger(int arr1[], int arr2[], int n, int m){
        int k = 0, i = 0, j = 0;
        int arr3[k];

        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {   // remove duplicates while copying
                if(i == 0 || arr1[i] != arr1[i-1]){
                    arr3[k] = arr1[i];
                    k++;
                }
                i++;
            }
            else if (arr2[j] < arr1[i])
            {   // remove duplicates while copying
                if(j == 0 || arr2[j] != arr2[j-1]){
                    arr3[k] = arr2[j];
                    k++;
                }    
                    j++;
            }
            else{
                // remove duplicates while copying
                if((i==0 || arr1[i] != arr1[i-1]) && (j==0 || arr2[j] != arr2[j-1])){
                    arr3[k] = arr1[i];
                    k++;
                }       
                    i++;
                    j++;
            }
        };

        while (i < n)
        {
            // remove duplicates while copying
            if(i==0 || arr1[i] != arr1[i-1]){
                arr3[k] = arr1[i];
                k++;
            }    
                k++;
        };
        while (j < m)
        {
            // remove duplicates while copying
            if(j==0 || arr2[j] != arr2[j-1]){
                arr3[k] = arr2[j];
                k++;
            }
                j++;
        };

        for (int l=0; l<k; l++)
        {
            // print new sorted arr
            cout << arr3[l] << " ";
        };    
}

int main()
{
    int n = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int m = 4;
    int arr2[m] = {1, 2, 6, 7};
    
    arrayMerger(arr1, arr2, n, m);
    
    
    return 0;
    
}
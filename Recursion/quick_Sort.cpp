#include<iostream>
using namespace std;

int pivit_Indx(int arr[], int low, int high){
        // two pointer sorting
        int first=low, second=low;     
        while(second <= high){  
            // agar arr[high] bada hai ya barabar hai to swap karo
            if(arr[high] >= arr[second]){
                swap(arr[first], arr[second]); // swap karo
                second++, first++; // dono pointer ko ++ karo
            }
            else{ // agar chhota hai to second ko ++ karo bas
                second++;
            }
        }
        return first-1;
}

void qucick_Sort(int arr[], int low, int high){
    if(low >= high)
        return;
    
    int pivit = pivit_Indx(arr, low, high);

    qucick_Sort(arr, low, pivit-1); // left part
    qucick_Sort(arr, pivit+1, high); // right part
}

int main()
{
    int arr[6] = {3,8,0,2,0,4};
    qucick_Sort(arr, 0, 5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    } 
}
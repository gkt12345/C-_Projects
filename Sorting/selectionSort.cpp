#include<iostream>
using namespace std;


// selection sort
int main()
{
    int arr[5] = {2,7,8,1,6};
    
    for(int i=0; i<5-1; i++){
        // small elmnt
        int smallIndx = i;
 
        for(int j=i; j<5; j++){
            if(arr[smallIndx] > arr[j]){
                smallIndx = j;
            }
        }
        // swaping
        int temp = arr[smallIndx];
        arr[smallIndx] = arr[i];
        arr[i] = temp; 
    }

    // print arr
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}
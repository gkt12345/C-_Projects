#include<iostream>
using namespace std;

Bubble sort
int main()
{
    int arr[5] = {8,7,2,1,6};
    
    for(int i=0; i<5-1; i++){

        for(int j=0; j<5-1-i; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
        
    }

    // print arr
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}
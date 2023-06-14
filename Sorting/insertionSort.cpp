#include<iostream>
using namespace std;

// Inserstion sort: divide arr in 2 part, sort and unsort. 
// picked values from unsorted part and move it to its right position

int main()
{
    int arr[5] = {8,7,2,1,6};
    
    for(int i=0; i<5-1; i++){

        for(int j=i; j>=0; j--){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                break;
            }
        }   
    }

    // print arr
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}
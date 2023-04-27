#include<iostream>
using namespace std;

int main()
{
    // [6,7,8,6,5,7,5]; ans=8

    int arr[7] = {6,7,8,6,5,7,5};
    
    for(int i=0; i<6; i++ ){
        if(arr[i] == -1){
            continue;
        }

        for(int j=i+1; j<7; j++){
            if(arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1;
            }
        }

    }

    for(int i=0; i<7; i++){
        if(arr[i] != -1)
        cout<<arr[i];
    }

    return 0;
}
#include<iostream>
using namespace std;

 
int main()
{
    // array rotate :
    // [6,-7,8,11,5,8] to [8,6,-7,8,11,5]

    int arr[6] = {6,-7,8,11,5,8};
    
    int temp = arr[5];
    
    for(int i=4; i>=0; i-- ){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    for(int i=0; i<=5; i++){
        cout<<arr[i]<<", ";
    }

    return 0;
}
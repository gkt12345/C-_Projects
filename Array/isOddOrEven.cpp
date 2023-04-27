#include<iostream>
using namespace std;

// print odd in arr
int main()
{
    int arr[6] = {6,-7,8,11,5,8};
    
    for(int i=0; i<=5; i++){
        if(arr[i] % 2 != 0){
            cout<<arr[i] << " ";
        }
    }
    return 0;
}


// print even in arr
// int main()
// {
//     int arr[6] = {6,-7,8,11,5,8};
    
//     for(int i=0; i<=5; i++){
//         if(arr[i] % 2 == 0){
//             cout<<arr[i] << " ";
//         }
//     }
//     return 0;
// }

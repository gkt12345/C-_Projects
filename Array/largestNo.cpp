#include<iostream>
using namespace std;

// // largest no in arr
// int main()
// {
//     int arr[6] = {6,7,3,11,5,8};
//     int largest = arr[0];

//     for(int i=1; i<=5; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }

//     cout<<largest;

//     return 0;
// }


// smallest no in arr
int main()
{
    int arr[8] = {-6,7,3,11,5,8,170,0};
    int min = arr[0];

    for(int i=1; i>=7; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<min;

    return 0;
}









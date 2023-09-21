#include<iostream>
using namespace std;

// recursive aproach
void printArr(int *arr, int n, int i, int j)
{
        for(int k=i; k<=j; k++)
            cout<<arr[k]<<" ";
        cout<<endl;    
}

void printSubArr(int *arr, int n, int i, int j)
{
    if(i==n || j==n)
        return;

    printArr(arr, n, i, j);

    if(j == n-1)
        printSubArr(arr, n, i+1, i+1);
    else
        printSubArr(arr, n, i, j+1);    

}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    printSubArr(arr, n, 0, 0);

}










// brute force
// int main()
// {
//     int n = 5;
//     int arr[n] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for(int sp=0; sp<n; sp++)
//     {
//         for(int ep=sp; ep<n; ep++)
//         {
//             for(int i=sp; i<=ep; i++)
//             {
//                 cout<<arr[i]<<" ";
//             }
//             sum++;
//             cout<<endl;
//         }
//     }
//     cout<<sum;
// }
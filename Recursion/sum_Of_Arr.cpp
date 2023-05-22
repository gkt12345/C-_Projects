#include<iostream>
using namespace std;

void print_Sum(int *arr, int size, int sum){
    if(size==0)
    return;
    
    sum+=arr[0];
    cout<<sum<<" ";
    print_Sum(arr+1, size-1, sum);
}

/* // reverse sum
void print_Sum(int *arr, int size, int sum){
    if(size==0)
    return;
    sum+=arr[0];
    print_Sum(arr+1, size-1, sum);
    cout<<sum<<" ";
}*/

int main(){
    int n = 4;
    int arr[n] = {6, 5, 2, 1};
    int sum =0;
    print_Sum(arr, n, sum);
}
#include<iostream>
using namespace std;

void find(int *arr, int index, int n, int sum)
{
     if(index == n)
     {
        cout<<sum<<" ";
        return;
     }

     find(arr, index+1, n, sum);
     find(arr, index+1, n, sum+arr[index]);  

}

int main()
{
    int n = 3;
    int arr[n] = {2, 3, 5};
    int sum = 0;
    find(arr, 0, n, sum);

    return 0;
}
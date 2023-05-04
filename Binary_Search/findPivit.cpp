#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {4, 5, 1, 2, 3};

    int mid, s=0, e=n-1;
    while(s < e){
        mid = s + (e-s) /2;
        if(arr[mid] >= arr[0])
            s = mid+1;
         else
            e = mid;   
    }
    cout<<s;
    return 0;
}


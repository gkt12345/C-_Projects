#include<iostream>
using namespace std;

// find all sub arrays of given array

int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // int j=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }    

}
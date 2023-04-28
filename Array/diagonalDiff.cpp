#include<iostream>
using namespace std;

// Given a square matrix, calculate the absolute difference between the sums of its diagonals.
// 1 2 3
// 4 5 6
// 9 8 9
// left = 1+5+9 = 15, right = 3+5+9 = 17;
// ans = 15-17 = 2

int main()
{
    int n = 3;
    int arr[n][n] = {{1, 2, 3}, {4, 5, 6}, {9,8, 9}};
    // int arr[3][3];
    // int n = sizeof(arr);
    int leftSum = 0;
    int rightSum=0;
    
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //     // int a = j+1;
    //     arr[i][j] = j+1;
    //     cout<< arr[i][j]<<" ";
    // }
    // cout<<endl;
    // }

    // int n = 3;

    for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
              if(j == i){
                  leftSum += arr[i][j];
              }
              if(j == n-i-1){
                  rightSum += arr[i][j];
              }
          }    
      }
      int result = leftSum - rightSum;
    //   cout<<leftSum;
    //   cout<<rightSum;  
      cout<<abs(result);  

     return 0;   

}
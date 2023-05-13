#include<iostream>
using namespace std;

// 1 2 3 4         convert to =>      1 3 9  13          
// 5 6 7 8                            2 6 10 14  
// 9 10 11 12                         3 7 11 15 
// 13 14 15 16                        4 8 12 16

int main()
{   int arr[4][4];
    for(int i=0; i<4;  i++)
    for(int j=0; j<4; j++)
    cin>>arr[i][j];

    for(int i=0; i<3;  i++){
        for(int j=i+1; j<4; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0; i<4;  i++){
        for(int j=0; j<4; j++){
            cout<< arr[i][j] << " ";
        }
        cout<<"\n";
    }

    

  return 0;
}
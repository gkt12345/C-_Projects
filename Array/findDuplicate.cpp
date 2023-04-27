#include <iostream>
using namespace std;

// int arr[n] = {1, 3, 2, 1, 3};
// elements will be 0 to n-1;
//  we have to print 1 and 3 because it repeat more than 1 times.

int main()
{
    int N = 5;
    int arr[N] = {1, 3, 2, 1, 3};

    int countArr[N] = {0};

    for (int i = 0; i < N; i++)
    {
        int index = arr[i];
        countArr[index]++;
    }

    for(int i=0; i<N; i++){
        if(countArr[i] > 1){
            cout<<i<<" ";
        }
    }
    return 0;
}

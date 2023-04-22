#include<iostream>
using namespace std;

int main()
{
    int decimalVal = 24;
    int sum = 0;
    while (decimalVal)
    {
        int digit = decimalVal % 2;
        decimalVal = decimalVal / 2;
        sum = sum * 10 + digit;
    }
    cout<<sum;

}



// from array

// int main()
// {
//     int decimalVal = 24;

//     int binarynum[32];
//     int i = 0;
//     while(decimalVal){
//         binarynum[i] = decimalVal % 2;
//         decimalVal = decimalVal / 2;
//         i++;
//     }
    
//     for(int j=i-1; j>=0; j--){
//          cout<<binarynum[j];
//     }
// }
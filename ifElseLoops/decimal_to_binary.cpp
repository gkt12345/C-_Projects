#include<iostream>
using namespace std;

int main()
{
    int decimalVal = 24;
    int sum = 0;
    int mul = 1;
    
    while (decimalVal)
    {   
        // find remender
        int digit = decimalVal % 2; // 0 0 0  1 1
        
        // find digit sum 
        sum = sum + mul*digit;      // 0 0 0  1000 11000 
        
        // divide decimal val
        decimalVal = decimalVal / 2;  // 12 6 3 1 0 
        
        // to prevent from not print 0 in  starting 
        mul = mul*10;           // 10 100 1000 10000 100000
        
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
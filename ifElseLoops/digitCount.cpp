#include<iostream>
using namespace std;


int main()
{
    // n=1090, total digit=4

    int num;
    cin>>num;

    int n = 10;
    int digit = 1;

    
    for(int i=1; i>0; i++){
        if(num / n == 0){
            cout<<digit;
            return 0;
        }
        n = n * 10;
        digit++;

    }

}



// from while loop
// int main()
// {
//     int number = 34575;
//     int digit = 0;

//     while (number)
//     {
//          digit++;
//          number = number / 10;           
//     }
    
//     cout<<digit;

// }























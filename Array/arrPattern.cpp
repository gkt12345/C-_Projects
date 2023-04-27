#include <iostream>
using namespace std;

// print arr:-
// 3 12 12 11 8
// 3 12 12 11
// 3 12 12
// 3 12
// 3

int main()
{
    int arr[] = {3, 13, 12, 11, 8};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}


// 2nd :---
// 3 13 12 11 8 
// 13 12 11 8
// 12 11 8 
// 11 8
// 8

// int main()
// {
//     int arr[] = {3, 13, 12, 11, 8};

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j < 5; j++)
//         {
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
// }



// // 3rd:- 
// // reverse arr 5 times

// int main()
// {
//     int arr[] = {3, 13, 12, 11, 8};

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j=4; j >= 0; j--)
//         {
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
// }


// 4th:- 
// reverse arr 5 times
// 8 11 12 13 3 
// 11 12 13 3 
// 12 13 3 
// 13 3
// 3 

// int main()
// {
//     int arr[] = {3, 13, 12, 11, 8};

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j=4-i; j >= 0; j--)
//         {
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
// }


// 5:-
// 8 11 12 13 3 
// 8 11 12 13   
// 8 11 12      
// 8 11         
// 8 
// int main()
// {
//     int arr[] = {3, 13, 12, 11, 8};

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j=4; j>=i; j--)
//         {
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
// }



















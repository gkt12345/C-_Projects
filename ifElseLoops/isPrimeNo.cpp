#include <iostream>
using namespace std;

int main()
{
    // num is prime or not

    int num = 113;

    if (num < 2)
    {
        cout << "not prime";
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime";
            return 0;
        }
    }
    cout << "is Prime";
    return 0;
}

// int main()
// {
//     // how many num is prime

//     int num = 111;
//     int sum = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         if (i == 2)
//         {
//             sum++;
//             cout << i << " ";
//         }

//         int newnum = i;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
            
//             if ((j == (newnum - 1)) && (i % j != 0))
//             {
//                 sum++;
//                 cout << newnum << " ";
//             }
//         }
//     }
//     cout << "\n total prime no are: " << sum;
// }

#include <iostream>
using namespace std;

int main()
{
    int num = 101;
    int sum = 0;
    int digit = 1;

    while (num)
    {
        int rem = num % 10;
        if (rem == 0)
        {
            rem = 1;
        }
        else
        {
            rem = 0;
        };
        sum += rem * digit;
        num = num / 10;
        digit = digit * 10;
    }

    cout << sum;
}
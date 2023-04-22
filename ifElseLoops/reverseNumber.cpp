#include <iostream>
using namespace std;

int main()
{
    int num = 4567;
    int sum = 0;

    while (num)
    {
        int digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }

    cout << sum;
}







#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = 0;
    int second = 1;

    for(int i=1; i<=n; i++){
        // edge cases
        if(i == 1){
            cout << first << ", ";
            continue;
        }
        if(i == 2){
            cout << second << ", ";
            continue;
        }

        // main code
        int curr = first + second;
        first = second;
        second = curr;
        cout << curr << ", ";
    }
    return 0;
}
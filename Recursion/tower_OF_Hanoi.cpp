#include<iostream>
using namespace std;

long steps = 0;
long tower_OF_Hanoi(int n, int from, int to, int helper){
        
        if(n == 0)
            return steps;

        tower_OF_Hanoi(n-1, from, helper, to);
        cout<<"Move disk "<<n<<" from rod "<< from << " to rod "<<to<< endl;
        steps++;   
        tower_OF_Hanoi(n-1, helper, to, from);    
}

int main()
{
    int n = 3;
    int rod1 = 1, rod2=2, rod3=3;
    // rod1 is from, and rod2 is helper, rod 3 is destination
    cout<<tower_OF_Hanoi(n, rod1, rod3, rod2); 
    
    return 0;
}
#include<iostream>
using namespace std;

// int main(){
//     // five star
//     int total_rows;
//     cin>> total_rows;

//     for(int row=1; row<= total_rows; row++){
//         for(int col=1; col<= (total_rows-row)){

//         }
//     }
// }



// int main(){

//     int total_row;
//     cin>> total_row;

//     for(int row=1; row<=total_row; row++){
//         // space
//         for(int col=1; col<=total_row-row; col++){
//             cout<<" ";
//         }

//         // star
//         for(int col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// butterfly
int main()
{

    int n;
    cin>> n;

    // first half
    for(int row=1; row<=n; row++){
        // star
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        
        // space
        for(int col=1; col<=((2*n)-(2*row)); col++){
            cout<<" ";
        }

        // star
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    // 2nd half
    for(int row=n-1; row>=1; row--){
        // star
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        
        // space
        for(int col=1; col<=((2*n)-(2*row)); col++){
            cout<<" ";
        }

        // star
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

}









































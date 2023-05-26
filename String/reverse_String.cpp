#include<iostream>
using namespace std;

// reverse string : much.very.program.this.like.i
int main()
{
    string s = "i.like.this.program.very.much";
    
    string str = "", str2="";
    
    for(int i=0; i<s.size(); i++){
        
        if(s[i]=='.'){
            /* 1st time: "." + "i" + ""
            2nd time: "." + "like" + ".i"
            3d time:  "."+ "this" + ".like.i" */
            str2 = "."+str+str2;
            str = "";
        }
        
        else
        str += s[i];
    }
    //   "much" + ".very.program.this.like.i"     
    cout<<str + str2;
    
}
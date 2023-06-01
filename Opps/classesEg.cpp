#include<iostream>
using namespace std;

class students
{
    public:

    int rollno;
    string name;
    string branch;
};

int main(){
    students obj;
    obj.name = "gaurav";
    obj.rollno = 123;
    cout<<obj.name;

    return 0;
}
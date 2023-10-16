/*  
Exp_14
PRN - 22070123137
Part 2
Single Inheritence
*/
#include<iostream>
using namespace std;
class name{
    public:
    name()
    {
        cout<<"This is Pranav\n";
    }
};
class Firstname: public name{
};
int main()
{
    Firstname obj;
    return 0;
}

/*
Output
This is Pranav
*/

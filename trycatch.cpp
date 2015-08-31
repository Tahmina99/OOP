#include<iostream>
using namespace std;
int main()
{
    cout<<"start\n";
    try
    {
        cout<<"inside try block\n";
        throw 10;
        cout<<"thos will not execute\n";
    }
    catch(int i)
    {
        cout<<"cought one!number is:";
        cout<<"i"<<"\n";
        return 0;
    }
}

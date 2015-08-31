#include<iostream>
using namespace std;
inline int even(int x)
{
    return !(x%2);
}
int main()
{
    int a;
    cout<<"enter the number:\n";
    cin>>a;
    if(even(a))
    cout<<" a is even\n";
    if(even(11))
    cout<<"a is even\n";
    return 0;
}

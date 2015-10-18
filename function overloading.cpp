#include<iostream>
using namespace std;
int volume(int r)
{
    return(r*r*r);
}
int volume(int r,int h)
{
     float pi=3.1426;
    return(pi*r*h);
}
int main()
{
    int r,h;
    cin>>r>>h;
    cout<<volume(r)<<"\n";
    cout<<volume(r,h)<<"\n";
    return 0;
}

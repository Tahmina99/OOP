#include<iostream>
using namespace std;
int main()
{
    int year,a,b,c;
    cout<<"enter the year:";
    cin>>year;
    a=year%4;
    b=year%100;
    c=year%400;
    if(((a==0)&&(b!=0)||(c==0)))
    cout<<"the year is leap year:"<<year;
    else
    cout<<"the year is not leap year:"<<year;

}

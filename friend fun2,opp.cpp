#include<iostream>
using namespace std;
class A;
class B
{
    int b;
    public:
    void setvalue(int i){b=i;}
    friend int max(A,B);
};
class A
{
    int a;
    public:
    void setvalue(int i){a=i;}
     friend int max(A,B);

};
int max(A m,B n)
{
    if(m.a>=n.b){cout<<"max number is:"<<m.a;}
    else
    {
        cout<<"max number is:"<<n.b;
    }
}
int main()
{
    int p;
    cout<<"enter the number:\n";
    cin>>p;
    A r;
    r.setvalue(p);
    int q;
    cout<<"enter the number:\n";
    cin>>q;
    B s;
    s.setvalue(q);
    max(r,s);
    return 0;
}

#include<iostream>
using namespace std;
class A;
class B
{
    int n;
    public:
    void setvalue(int i){n=i;}
    void display(){cout<<n<<"\n";}
    friend void exchange(A &,B &);
};
class A
{
    int m;
    public:
    void setvalue(int i){m=i;}
    void display(){cout<<m<<"\n";}
      friend void exchange(A &,B &);
};
void exchange(A &x,B &y)
{
    int temp;
    temp=x.m;
    x.m=y.n;
    y.n=temp;
}
int main()
{
    int p,q;
    cout<<"enter the number:\n";
    cin>>p;
    A r;
    r.setvalue(p);
    cout<<"enter the number:\n";
    cin>>q;
    B s;
    s.setvalue(q);
    cout<<"value before exchange:\n";
    r.display();
    s.display();
    exchange(r,s);
      cout<<"value after exchange:\n";
    r.display();
    s.display();
    return 0;

}


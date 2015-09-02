#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int x,int y);
    int show();
};
A::A(int x,int y)
{
    a=x;
    b=y;
}
int A::show()
{
    cout<<"sum is:"<<a+b<<"\n";
}

    int main()
    {
        int m,n;
        cout<<"enter two number:\n";
        cin>>m>>n;
        A ob(m,n);
        ob.show();
        return 0;
}

#include<iostream>
using namespace std;
#define m a*i+b*j+c*k
class vector
{
    float a,b,c;
    public:
    void get()
    {
        cout<<"enter the value of i,j,k for vector coefficient\n";
        cin>>a>>b>>c;
        cout<<"------vector form--------\n\n";
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<"\n\n";
    }
    void add(vector e,vector d)
    {
        a=e.a+d.a;
        b=e.b+d.b;
        c=e.c+d.c;
        cout<<"\n\n adding of the vector\n\n";
        cout<<"new vector is:\n";
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<"\n\n";
    }
};
int main()
{
    vector q,n,p;
    cout<<"\n vector representation\n\n";
    q.get();
    n.get();
    p.add(q,n);
    return 0;

}

#include<iostream>
using namespace std;
#define m a*i+b*j+c*k
class vector
{
    float a,b,c;
    public:
    void get()
    {
        cout<<"enter the value of i,j,k for coefficient\n";
        cin>>a>>b>>c;
    }
    void modify()
    {
        float p,q,r;
        cout<<"enter the value of i,j,k for coefficient\n\n";
        cin>>p>>q>>r;
        a=p;
        b=q;
        c=r;

    }
    void multiply()
    {
        int n;
        cout<<"enter the value of n:\n\n";
        cin>>n;
        a=a*n;
        b=b*n;
        c=c*n;
    }
    void display()
    {
        cout<<"the vector is in linear form:\n";
        cout<<a<<","<<b<<","<<c<<"\n\n";
        cout<<"the vector is in own form:\n\n";
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<"\n\n";
    }
};
int main()
{
    vector a;
    int n;
    cout<<"this program is for vector representation\n\n";
    do
    {
        cout<<"select your choise from below\n\n";
        cout<<"press 1 for creat the vector\n\n";
        cout<<"press 2 for display the vector\n\n";
        cout<<"press 3 for modify the vector\n\n";
        cout<<"press 4 for multiply the vector\n\n";
        cout<<"press 5 for exit\n\n";
        cout<<"now enter your chois\n\n";
        cin>>n;
        switch(n)
        {
            case 1:
            a.get();
            break;
            case 2:
            a.display();
            break;
            case 3:
            a.modify();
            break;
            case 4:
            a.multiply();
            break;
            case 5:
            break;
            default:
            cout<<"try again\n\n";

        }
    }
    while(n!=5);
    return 0;
}

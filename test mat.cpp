#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int m[2][2];
    public:
    void read(void)
    {
        cout<<"enter the matrix:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>m[i][j];
            }
        }
    }

    void add(A m1,A m2)
    {
      A s[2][2];
      for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
             s[i][j]=m1[i][j]+m2[i][j];
            }

    }
    cout<<s[i][j];
    }
};
int main()
{
    A m1,m2,m3;
    m1.read();
    m2.read();
    m3.add(m1,m2);
    return 0;
}


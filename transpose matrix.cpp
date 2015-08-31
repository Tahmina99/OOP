#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,m1[i][j];
    cout<<"enter the order of the matrix:\n";
    cin>>m>>n;
    cout<<"enter the  matrix:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>m1[i][j];
        }
    }

     cout<<"transpose of the matrix:\n";
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<m1[j][i];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;

}

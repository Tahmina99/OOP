#include<iostream>
using namespace std;
class matrix
{
    int m[3][3];
    public:
    void read(void)
    {
        cout<<"enter the matrix:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m[i][j];
            }
        }
    }
        void display(void)
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<m[i][j];
                    cout<<"\t";
                }
                cout<<"\n";
            }
        }
        friend matrix trans(matrix);
    };
    matrix trans(matrix m1)
    {
        matrix m2;
        for(int i=0;i<3;i++)
        {
             for(int j=0;j<3;j++)
             {
                 m2.m[i][j]=m1.m[j][i];

             }
        }
        return(m2);

    }
    int main()
    {
        matrix mt1,mt2;
        mt1.read();
        cout<<"\n the matrix is:\n";
        mt1.display();
        mt2=trans(mt1);
        cout<<"\n transpose matrix is:\n";
        mt2.display();
        return 0;
    }


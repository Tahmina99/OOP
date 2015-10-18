#include<iostream>
using namespace std;
class myclass
{
    int x;
    public:
    myclass(int n)
    {
        x=n;
    }
    void show()
    {
        cout<<x<<"\n";
    }
};
int main()
{
    myclass ob1(10),ob2(0);
    ob2=ob1;
    ob1.show();
    ob2.show();
    return 0;
}

#include<iostream>
using namespace std;
class truck;
class car
{
    int p,speed;
    public:
    car(int n,int m)
    {
        p=n;
        speed=m;
    }
    friend int sp_greater(car c,truck t);
};
class truck
{
    int weight,speed;
    public:
    truck(int w,int s)
    {
        weight=w;
        speed=s;
    }
    friend int sp_greater(car c,truck t);


};
int sp_greater(car c,truck t)
{
    return c.speed-t.speed;
}
int main()
{
    int t;
    car c1(6,55),c2(2,120);
    truck t1(10000,55),t2(20000,72);
    cout<<"comparing c1 and t1:\n";
    t=sp_greater(c1,t1);
    if(t<0)
    cout<<"truck is faster\n";
    else if(t==0)
    cout<<"both speed are equal";
    else
    cout<<"car is faster\n";
    cout<<"\n comparing c2 and t2 \n";
    t-sp_greater(c2,t2);
    if(t<0)
    cout<<"truck is faster\n";
    else if(t==0)
    cout<<"both speed are equal\n";
    else
    cout<<"car is faster\n";
    return 0;
}

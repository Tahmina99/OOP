#include<iostream>
using namespace std;
class base
{
  public:
  int i;
  base(int x){i=x;}
  virtual void func()
  {
      cout<<"using base version of function\n";
      cout<<i<<"\n";
  }
};
class derived1:public base
{
    public:
    derived1(int x):base(x){}
    void func()
    {
        cout<<"using derived1 version of function\n";
        cout<<"product is:"<<i*i<<"\n";
    }
};
class derived2:public base
{
    public:
    derived2(int x):base(x){}
    void func()
    {
        cout<<"using derived2 version of function\n";
        cout<<"sum  is:"<<i+i<<"\n";
    }

};
int main()
{
    base *p;
    base ob(10);
    derived1 ob_1(10);
    derived2 ob_2(10);
    p=&ob;
    p->func();
    p=&ob_1;
    p->func();
    p=&ob_2;
    p->func();
    return 0;

}

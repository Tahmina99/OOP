#include<iostream>
using namespace std;
class account
{
    int account_no,balance;
    char name[100];
    char ac_type[100];
    public:
    void getdetails();
    void deposite();
    void withdraw();
    void display();
};
void account::getdetails()
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"\n";
    cout<<"enter the account_no:";
    cin>>account_no;
    cout<<"\n";
    cout<<"enter account type:";
    cin>>ac_type;
    cout<<"\n";
    cout<<"entet opening account balance:";
    cin>>balance;
    cout<<"\n";
}
void account::deposite()
{
    int depo=0;
    cout<<"enter ur deposite amount:";
    cin>>depo;
    cout<<"\n";
    balance=balance+depo;
    cout<<"your new balance is:"<<balance<<"\n";
}
void account::withdraw()
{
    int with=0;
    cout<<"enter ur withdraw amount:";
    cin>>with;
    cout<<"\n";
    if(with>balance)
    {
        cout<<"insufficient balance";
    }
    else
    {
        balance=balance-with;
        cout<<"your remaining balance is:"<<balance<<"\n";
    }
}
void account::display()
{
    cout<<"neme is:"<<name<<"\n";
    cout<<"account number is:"<<account_no<<"\n";
    cout<<"account type is:"<<ac_type<<"\n";
    cout<<"balance is:"<<balance<<"\n";
}
int main()
{
    account ob;
    int i=0;
    cout<<"\tselect your option from below\n";
    do
    {
       cout<<"\tenter 1 for get detailes\n";
       cout<<"\tenter 2 for deposite\n";
       cout<<"\tenter 3 for withdraw\n";
       cout<<"\tenter 4 for display\n";
       cout<<"\tenter 5 for exit\n\n";
       cin>>i;
       switch(i)
       {
           case 1:
           ob.getdetails();
           break;
           case 2:
           ob.deposite();
           break;
           case 3:
           ob.withdraw();
           break;
           case 4:
           ob.display();
           break;
           case 5:
           break;
           default:
           cout<<"try again"<<"\n";
       }
       cout<<"\n";
    }
     while(i!=5);
    return 0;
}

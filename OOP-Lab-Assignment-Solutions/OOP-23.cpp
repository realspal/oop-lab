//OOP 23 - Savings account management
#include<iostream>
#include<cmath>
using namespace std;
class SavingsAccount 
{
    char accname;
    double balance;
    double roi;
    public:
    int accnum;
    static int index;
    SavingsAccount()
    {
        index++;
        balance=0.0;
        roi=7.0/100.0;
        accnum=4000+index;
    }
    void setBalance(double x)
    {
        balance=x;
    }
    void withdraw(double x)
    {
        if(balance-x<1000)
        cout<<"Withdrawal failed due to insufficient balance."<<endl;
        else
        {
            balance-=x;
            cout<<"Withdrawal of ?"<<x<<"/- from A/C no. "<<accnum<<" successful. Balance = ?"<<balance<<"/-."<<endl;
        }
    }
    void deposit(double x)
    {
        balance+=x;
        cout<<"Deposition of ?"<<x<<"/- to A/C no. "<<accnum<<" successful. Balance = ?"<<balance<<"/-."<<endl;
    }
    void display()
    {
        cout<<"A/C no. = "<<accnum<<". Balance = ?"<<balance<<"/-."<<endl;
    }
    double addInterest()
    {
        double in=balance*roi*1.0;
        balance+=in;
        cout<<"Annual interest of ?"<<in<<"/- paid to A/C no. "<<accnum<<". Balance = ?"<<balance<<"/-."<<endl;
        return in;
    }
};
int SavingsAccount::index=0;
int main()
{
    cout<<"---- Creating 5 savings accounts ----"<<endl;
    SavingsAccount A[5];
    for(int i=0;i<5;i++)
    {
        double b=rand()%99000+1000.0;
        A[i].setBalance(b);
    }
    cout<<"\n---- Displaying balance ----"<<endl;
    for(int i=0;i<5;i++)
    A[i].display();
    cout<<"\n---- Withdrawal and deposition ----"<<endl;
    int ch=0,ch2=0,ch3=0;
    do 
    {
        cout<<"Enter A/C number to withdraw/deposit money, 0 to exit."<<endl;
        cin>>ch;
        if(ch==0)
        break;
        if(ch<4001 || ch>4005)
        {
            cout<<"Invalid A/C number."<<endl;
            continue;
        }
        cout<<"Enter 1 to withdraw, 2 to deposit, 3 to display balance."<<endl;
        cin>>ch2;
        switch(ch2)
        {
            case 1:
            cout<<"Enter amt. to be withdrawn : ?";
            cin>>ch3;
            A[ch-4001].withdraw(ch3);
            break;
            case 2:
            cout<<"Enter amt. to be deposited : ?";
            cin>>ch3;
            A[ch-4001].deposit(ch3);
            break;
            case 3:
            A[ch-4001].display();
            break;
            default:
            cout<<"Invalid choice."<<endl;
            break;
        }
    }
    while(ch!=0);
    cout<<"\n---- Depositing annual interest ----"<<endl;
    double total=0.0;
    for(int i=0;i<5;i++)
    total+=A[i].addInterest();
    cout<<"\n---- Displaying total annual interest ----"<<endl;
    cout<<"Total amount of interest paid to all accounts in one year = ?"<<total<<"/-"<<endl;
    return 0;
}
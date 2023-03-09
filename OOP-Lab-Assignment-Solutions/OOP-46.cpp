//OOP 46 - Exception handling in division by zero
#include<iostream>
using namespace std;
int main()
{
    int num,denom;
    cout<<"Enter two integers : ";
    cin>>num>>denom;
    try
    {
        if(denom==0)
        throw denom;
        double result=(1.0*num)/denom;
        cout<<num<<" / "<<denom<<" = "<<result<<endl;
    }
    catch(int error)
    {
        cout<<"Exception : Division by 0 not allowed !"<<endl;
    }
    return 0;
}
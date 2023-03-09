//OOP 2 - sum of two integers
#include<iostream>
using namespace std;
class Addition
{
    int a,b;
    public:
    Addition()
    {
        a=0;
        b=0;
    }
    void getIntegers()
    {
        cout<<"Enter first integer  : ";
        cin>>a;
        cout<<"Enter second integer : ";
        cin>>b;
    }
    void printSum()
    {
        int sum=a+b;
        cout<<"Sum = "<<sum<<endl;
    }
};    
int main()
{
    Addition obj;
    obj.getIntegers();
    obj.printSum();
    return 0;
}
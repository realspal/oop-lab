//OOP 11 - Factorial of a number using constant reference parameters
#include<iostream>
using namespace std;
class Factorial
{
    public:
    int getInteger()
    {
        int x;
        cout<<"Enter an integer : ";
        cin>>x;
        return x;
    }
    int getFactorial(const int &num)
    {
        int y=1;
        for(int i=1;i<=num;i++)
        y*=i;
        return y;
    }
};    
int main()
{
    Factorial obj;
    int n=obj.getInteger();
    int f=obj.getFactorial(n);
    cout<<"Factorial = "<<f<<endl;
    return 0;
}
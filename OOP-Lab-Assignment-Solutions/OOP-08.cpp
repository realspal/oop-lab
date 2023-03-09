//OOP 8 - Swap function using reference
#include<iostream>
using namespace std;
class Swap
{
    public:
    void swap(int &a,int &b)
    { 
        int c=a;
        a=b;
        b=c;
    }
    void printNumbers(int x,int y)
    {
        cout<<"First number = "<<x<<" , second number = "<<y<<endl;
    }
};    
int main()
{
    Swap obj;
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Before swapping : ";
    obj.printNumbers(a,b);
    obj.swap(a,b);
    cout<<"After swapping  : ";
    obj.printNumbers(a,b);
    return 0;
}
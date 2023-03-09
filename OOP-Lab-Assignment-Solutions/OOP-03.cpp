//OOP 3 - factorial table
#include<iostream>
using namespace std;
class Factorial
{
    public:
    int fact(int x)
    {
        int y=1;
        for(int i=1;i<=x;i++)
        y*=i;
        return y;
    }
    void printTable()
    {
        for(int i=1;i<=6;i++)
        cout<<i<<"! = "<<fact(i)<<endl;
    }
};    
int main()
{
    Factorial obj;
    obj.printTable();
    return 0;
}
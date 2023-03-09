//OOP 4 - printing 1 to 10 and checking scope of variable
#include<iostream>
using namespace std;
class Ten
{
    public:
    void printNumbers()
    {
        for(int i=1;i<=10;i++)
        cout<<i<<"   ";
        //cout<<i; - Code does not run because 'i' was not declared in this scope
    }
};    
int main()
{
    Ten obj;
    obj.printNumbers();
    return 0;
}
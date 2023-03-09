//OOP 13 - Inline function for adding 3 numbers
#include<iostream>
using namespace std;
class Addition
{
    public:
    inline int add(int x,int y,int z)
    {
        int sum=x+y+z;
        return sum;
    }
};    
int main()
{
    int a,b,c;
    cout<<"Enter three integers : ";
    cin>>a>>b>>c;
    Addition obj;
    int s=obj.add(a,b,c);
    cout<<"Sum = "<<s<<endl;
    return 0;
}
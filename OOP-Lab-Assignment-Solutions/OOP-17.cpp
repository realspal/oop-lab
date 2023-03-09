//OOP 17 - Add function with default values for parameters
#include<iostream>
using namespace std;
class Addition
{
    public:
    inline int add(int x,int y=0,int z=0)
    {
        int sum=x+y+z;
        return sum;
    }
};    
int main()
{
    Addition obj;
    int s1=obj.add(10,20,30);
    int s2=obj.add(10,20);
    int s3=obj.add(10);
    cout<<"add(10,20,30) = "<<s1<<endl;
    cout<<"add(10,20)    = "<<s2<<endl;
    cout<<"add(10)       = "<<s3<<endl;
    return 0;
}
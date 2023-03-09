//OOP 14 - Comparing time taken by inline and non-inline functions
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
class Addition
{
    public:
    inline int add1(int x,int y,int z)
    {
        int sum=x+y+z;
        return sum;
    }
    int add2(int x,int y,int z)
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
    auto start1=high_resolution_clock::now();
    int s1=obj.add1(a,b,c);
    auto stop1=high_resolution_clock::now();
    auto start2=high_resolution_clock::now();
    int s2=obj.add2(a,b,c);
    auto stop2=high_resolution_clock::now();
    double duration1=std::chrono::duration<double,std::micro>(stop1-start1).count();
    double duration2=std::chrono::duration<double,std::micro>(stop2-start2).count();
    cout<<"Sum = "<<s1<<endl;
    cout<<"Time taken by inline function     = "<<duration1<<" microseconds"<<endl;
    cout<<"Time taken by non-inline function = "<<duration2<<" microseconds"<<endl;
    if(duration1>duration2)
    cout<<"Inline function takes MORE time than non-inline function."<<endl;
    else if(duration1<duration2)
    cout<<"Inline function takes LESS time than non-inline function."<<endl;
    else
    cout<<"Inline function takes EQUAL time as non-inline function."<<endl;
    return 0;
}
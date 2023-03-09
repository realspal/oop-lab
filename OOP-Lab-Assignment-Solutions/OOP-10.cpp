//OOP 10 - Comparing time taken swap functions using reference and non-reference
#include<iostream>
#include<cstring>
#include<chrono>
using namespace std;
using namespace std::chrono;
class Swap
{
    public:
    void swapNonRef(char *a,char *b)
    {
        char c[100];
        strcpy(c,a);
        strcpy(a,b);
        strcpy(b,c);
    }
    void swapRef(char **a,char **b)
    {
        char *c=*a;
        *a=*b;
        *b=c;
    }
    void printStrings(char *a,char *b)
    {
        cout<<"First string = "<<a<<" , second string = "<<b<<endl;
    }
};    
int main()
{
    Swap obj;
    char *a=new char[100];
    char *b=new char[100];
    cout<<"Enter two strings : "<<endl;
    cin.getline(a,100);
    cin.getline(b,100);
    cout<<"Before swapping                        : ";
    obj.printStrings(a,b);
    auto start1=high_resolution_clock::now();
    obj.swapNonRef(a,b);
    auto stop1=high_resolution_clock::now();
    cout<<"After swapping without using reference : ";
    obj.printStrings(a,b);
    auto start2=high_resolution_clock::now();
    obj.swapRef(&a,&b);
    auto stop2=high_resolution_clock::now();
    cout<<"After swapping again using reference   : ";
    obj.printStrings(a,b);
    double duration1=std::chrono::duration<double,std::micro>(stop1-start1).count();
    double duration2=std::chrono::duration<double,std::micro>(stop2-start2).count();
    cout<<"Time taken by function using non-reference = "<<duration1<<" microseconds"<<endl;
    cout<<"Time taken by function using reference     = "<<duration2<<" microseconds"<<endl;
    if(duration2>duration1)
    cout<<"Swap function using reference takes MORE time than one using non-reference."<<endl;
    else if(duration2<duration1)
    cout<<"Swap function using reference takes LESS time than one using non-reference."<<endl;
    else
    cout<<"Swap function using reference takes EQUAL time as one using non-reference."<<endl;
    return 0;
}
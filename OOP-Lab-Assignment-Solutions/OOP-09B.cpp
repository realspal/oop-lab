//OOP 9B - Swap strings using reference
#include<iostream>
#include<cstring>
using namespace std;
class Swap
{
    public:
    void swap(char **a,char **b)
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
    cout<<"Before swapping : ";
    obj.printStrings(a,b);
    obj.swap(&a,&b);
    cout<<"After swapping  : ";
    obj.printStrings(a,b);
    return 0;
}
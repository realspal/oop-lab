//OOP 9A - Swap strings without reference
#include<iostream>
#include<cstring>
using namespace std;
class Swap
{
    public:
    void swap(char *a,char *b)
    {
        char c[100];
        strcpy(c,a);
        strcpy(a,b);
        strcpy(b,c);
    }
    void printStrings(char *a,char *b)
    {
        cout<<"First string = "<<a<<" , second string = "<<b<<endl;
    }
};    
int main()
{
    Swap obj;
    char a[100],b[100];
    cout<<"Enter two strings : "<<endl;
    cin.getline(a,100);
    cin.getline(b,100);
    cout<<"Before swapping : ";
    obj.printStrings(a,b);
    obj.swap(a,b);
    cout<<"After swapping  : ";
    obj.printStrings(a,b);
    return 0;
}
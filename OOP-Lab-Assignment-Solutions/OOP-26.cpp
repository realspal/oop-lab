//OOP 26 - Operations on stack
#include<iostream>
using namespace std;
class Stack
{
    int *buffer,top,size;
    public:
    Stack(int n)
    {
        size=n;
        buffer=new int[n];
        top=-1;
        cout<<"Created stack of size "<<n<<"."<<endl;
    }
    void push(int x)
    {
        if(top==size-1)
        cout<<"Stack Overflow!"<<endl;
        else
        buffer[++top]=x;
        cout<<"Pushed "<<x<<" to stack."<<endl;
    }
    int pop()
    {
        if(top==-1)
        cout<<"Stack Underflow!"<<endl;
        else
        return buffer[top--];
        return -1;
    }
    void disp()
    {
        cout<<"Stack elements (top to bottom) : "<<endl;
        for(int i=top;i>0;i--)
        cout<<buffer[i]<<" --> ";
        cout<<buffer[0]<<endl;
    }
};
int main()
{
    Stack *st=new Stack(10);
    for(int i=2;i<=5;i++)
    st->push(i);
    cout<<"Popped "<<(st->pop())<<" from stack."<<endl;
    st->disp();
    return 0;
}
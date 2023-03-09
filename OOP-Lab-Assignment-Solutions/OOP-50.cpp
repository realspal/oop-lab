//OOP 50 - Template function to swap two interchangeable variables
#include<iostream>
#include<stack>
using namespace std;
template<typename T>
class Complex
{
    public:
    T real,img;
    Complex(){}
    Complex(T real,T img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        if(img<0)
        cout<<real<<" - "<<(0-img)<<"i";
        else
        cout<<real<<" + "<<img<<"i";
    }
};
template<typename T>
void swap_val(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template<typename T>
void swap_val(Complex<T> &C1,Complex<T> &C2)
{
    Complex<T> temp;
    temp.real = C1.real; 
    temp.img = C1.img;
    C1.real = C2.real;  
    C1.img = C2.img;
    C2.real = temp.real;  
    C2.img = temp.img;
}

template<typename T>
void swap_val(stack<T> &S1,stack<T> &S2)
{
    stack<T> temp1,temp2;
    while(S1.size()!=0)
    {
        temp1.push(S1.top());
        S1.pop();
    }
    while(S2.size()!=0)
    {
        temp2.push(S2.top());
        S2.pop();
    }
    while(temp2.size()!= 0)
    {
        S1.push(temp2.top());
        temp2.pop();
    }
    while(temp1.size()!= 0)
    {
        S2.push(temp1.top());
        temp1.pop();
    }
}
int main()
{
    cout<<"INTEGERS--------------------"<<endl;
    int a=10,b=20;
    cout<<"Before swapping : a = "<<a<<", b = "<<b<<endl;
    swap_val<int>(a,b);
    cout<<"After swapping  : a = "<<a<<", b = "<<b<<endl;
    cout<<"COMPLEX NUMBERS-------------"<<endl;
    Complex<int> C1(4,5),C2(6,7);
    cout<<"Before swapping : C1 = ";
    C1.display(); 
    cout<<", C2 = ";
    C2.display();
    cout<<endl;
    swap_val<int>(C1,C2);
    cout<<"After swapping  : C1 = ";
    C1.display(); 
    cout<<", C2 = ";
    C2.display();
    cout<<endl;
    cout<<"STACKS----------------------"<<endl;
    stack<int> S1,S2,disp;
    for (int i = 99; i <= 108; i++)
    {
        S1.push(i);
        disp.push(i);
    }
    cout<<"Before swapping : S1 = ";
    for (int i = 99; i <= 108; i++)
    {   
        cout<<disp.top()<<" ";
        disp.pop();
    }
    for (int i = 10; i > 0; i--)
    {
        S2.push(i);
        disp.push(i);
    }
    cout<<", S2 = ";
    for (int i = 10; i > 0; i--)
    {
        cout<<disp.top()<<" ";
        disp.pop();
    }
    cout<<endl;
    swap_val(S1,S2);
    cout<<"After swapping  : S1 = ";
    while(S1.size()!= 0)
    {
        cout<<S1.top()<<" ";
        S1.pop();
    }
    cout<<", S2 = ";
    while(S2.size()!= 0)
    {
        cout<<S2.top()<<" ";
        S2.pop();
    }
    cout<<endl;
}
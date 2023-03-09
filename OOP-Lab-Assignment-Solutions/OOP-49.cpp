//OOP 49 - Template function to find maximum of two comparable things
#include<iostream>
#include<cmath>
using namespace std;
template<typename T> 
void maxVal(T a,T b)
{
    if(a>b)
        cout<<a;
    else
        cout<<b;
}
template<typename T>
class Complex
{
    public:
    T real,img;
    Complex(){}
    Complex(T x,T y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        if(img<0)
        cout<<real<<" - "<<(0-img)<<"i"<<endl;
        else
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
template<typename T>
void maxVal(Complex<T> a,Complex<T> b)
{
    T modVal1 = sqrt(a.real*a.real + a.img*a.img);
    T modVal2 = sqrt(b.real*b.real + b.img*b.img);
    if(modVal1>modVal2)
        a.display();
    else
        b.display();
}
int main()
{
    maxVal<int>(3,4);   
    cout<<endl;
    maxVal<string>("Garrett","Walker"); 
    cout<<endl;
    maxVal<float>(3.5,4.7); 
    cout<<endl;
    Complex<double> C1(4.1,5.2),C2(6.4,7.5);
    maxVal<double> (C1,C2);
    return 0;
}
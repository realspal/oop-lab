//OOP 25 - Sum of complex numbers
#include<iostream>
using namespace std;
class Complex
{
    float real,img;
    public:
    Complex(float real=0.0,float img=0.0)
    {
        this->real=real;
        this->img=img;
    }
    void setReal(float real)
    {
        this->real=real;
    }
    void setImg(float img)
    {
        this->img=img;
    }
    float getReal()
    {
        return this->real;
    }
    float getImg()
    {
        return this->img;
    }
    void disp()
    {
        if(img>=0)
        cout<<real<<"+"<<img<<"i";
        else
        cout<<real<<""<<img<<"i";
    }
    Complex sum(Complex C)
    {
        Complex sumC;
        sumC.real=this->real+C.real;
        sumC.img=this->img+C.img;
        return sumC;
    }
};
int main()
{
    Complex C1,C2,C3;
    C1.setReal(10);
    C1.setImg(20);
    C2.setReal(30);     
    C2.setImg(40);
    C3=C1.sum(C2);
    cout<<"(";
    C1.disp();
    cout<<") + (";
    C2.disp();
    cout<<") = ";
    C3.disp();
    return 0;
}
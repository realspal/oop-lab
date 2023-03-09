//OOP 31 - Operator overloading in Complex class
#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
    double x,y;
    public:
    Complex()
    {
        x=0;
        y=0;
    }
    Complex(double x,double y)
    {
        this->x = x;
        this->y = y;
    }
    Complex operator+(Complex C)
    {
        Complex newC;
        newC.x = this->x + C.x;
        newC.y = this->y + C.y;
        return newC;
    }
    Complex operator-(Complex C)
    {
        Complex newC;
        newC.x = this->x - C.x;
        newC.y = this->y - C.y;
        return newC;
    }
    Complex operator*(Complex C)
    {  
        Complex newC;
        newC.x = (x * C.x) - (y * C.y);
        newC.y = (x * C.y) + (y * C.x);
        return newC;
    }
    Complex operator/(Complex C)
    {   
        Complex newC;
        newC.x = (x*C.x + y*C.y)/( pow(C.x,2) + pow(C.y,2) );
        newC.y = (y*C.x - x*C.y)/( pow(C.x,2) + pow(C.y,2) );
        return newC;
    }
    bool operator=(Complex C)
    {
        return x==C.x && y==C.y;
    }
    void display()
    {
        if(y>=0)
        cout<<x<<"+"<<y<<"i"<<endl;
        else
        cout<<x<<""<<y<<"i"<<endl;
    }
};
int main()
{
    Complex C1(2,3),C2(4,5);
    cout<<"C1 : ";  C1.display();
    cout<<"C2 : ";  C2.display();
    Complex sum = C1+C2;    
    cout<<"\nC1 + C2 = "; 
    sum.display();
    Complex sub = C1-C2;    
    cout<<"C1 - C2 = "; 
    sub.display();
    Complex mult = C1*C2;   
    cout<<"C1 * C2 = "; 
    mult.display();
    Complex divd = C1/C2;    
    cout<<"C1 / C2 = "; 
    divd.display();
    bool isEqual=(C1=C2);
    cout<<"(C1 == C2) ? = "<<isEqual<<endl;
    return 0;
}
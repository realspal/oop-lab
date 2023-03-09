//OOP 32 - Operations on quadratic polynomial
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
    void display()
    {
        if(y>=0)
        cout<<x<<"+"<<y<<"i"<<endl;
        else
        cout<<x<<""<<y<<"i"<<endl;
    }
    friend class Quadratic;
};
class Quadratic
{
    double a,b,c;
    public:
    Quadratic()
    {
        a=0;
        b=0;
        c=0;
    }
    Quadratic(double a,double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Quadratic operator+(Quadratic eq)
    {
        Quadratic newEq;
        newEq.a = a + eq.a;
        newEq.b = b + eq.b;
        newEq.c = c + eq.c;
        return newEq;
    }
    double compute(double x)
    {
        double sum = a*x*x + b*x + c;
        return sum;
    }
    void root1()
    {
        double root1_real,d = b*b - 4*a*c;
        Complex root1_com;
        if(d>=0)
        { 
            root1_real = ( -b + sqrt(d) )/(2*a);
            cout<<"Root1 : "<<root1_real<<endl;
        }
        else
        {  
            d*=-1;
            root1_com.x = -b/(2*a);
            root1_com.y = sqrt(d)/(2*a);
            cout<<"Root1 : "; root1_com.display();
        }
    }
    void root2()
    {
        double root2_real,d = b*b - 4*a*c;
        Complex root2_com;
        if(d>=0)
        {    
            root2_real = ( -b - sqrt(d) )/(2*a);
            cout<<"Root2 : "<<root2_real<<endl;
        }
        else
        {  
            d*=-1;
            root2_com.x = -b/(2*a);
            root2_com.y = -sqrt(d)/(2*a);
            cout<<"Root2 : "; root2_com.display();
        }
    }
    friend ostream &operator<<(ostream &out, const Quadratic &eq);
    friend istream &operator>>(istream &in, Quadratic &eq);
};
ostream &operator<<(ostream &out, const Quadratic &eq)
{
    out<<eq.a<<"x^2 + "<<eq.b<<"x + "<<eq.c<<endl;
    return out;
}
istream &operator>>(istream &in, Quadratic &eq)
{
    cout<<"Enter coefficients of ax^2+bx+c : ";
    in>>eq.a>>eq.b>>eq.c;
    return in;
}
int main()
{
    Quadratic Eq1,Eq2,Eq3;
    cout<<"Polynomial 1 :   ";
    cin>>Eq1;  
    cout<<"Polynomial 1 = "<<Eq1;
    cout<<"Polynomial 2 :   ";
    cin>>Eq2;       
    cout<<"Polynomial 2 = "<<Eq2;
    cout<<"Sum of polynomials : ";
    Eq3 = Eq1+Eq2;  
    cout<<Eq3;
    cout<<"Sum at x=2         : "<<Eq3.compute(2)<<endl;
    cout<<"Roots of sum"<<endl;
    Eq3.root1();
    Eq3.root2();
    return 0;
}
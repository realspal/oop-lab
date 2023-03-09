//OOP 19 - Area of rectangles
#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{ 
    double l,b;
    public:
    Rectangle(double l=0.0,double b=0.0)
    {
        this->l=l;
        this->b=b;
    }
    double area()
    { 
        double a=l*b;
        return a;
    }
};  
int main()
{
    Rectangle r1(10,10);
    Rectangle r2(30,20);
    Rectangle r3(40,30);
    Rectangle r4(160,90);
    cout<<"Area of Rectangle 1 (10x10)  = "<<r1.area()<<" sq. units"<<endl;
    cout<<"Area of Rectangle 2 (30x20)  = "<<r2.area()<<" sq. units"<<endl;
    cout<<"Area of Rectangle 3 (40x30)  = "<<r3.area()<<" sq. units"<<endl;
    cout<<"Area of Rectangle 4 (160x90) = "<<r4.area()<<" sq. units"<<endl;
    return 0;
}
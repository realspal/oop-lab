//OOP 43 - Inheritance using Shape2D, Circle and Rectangle
#include<iostream>
#define PI 3.14
using namespace std;
class Shape2D // Abstract Class
{      
    protected:
    double radius,length,breadth;
    public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};
class Circle:public Shape2D
{
    public:
    Circle(double r)
    {
        radius = r;
    }
    void area()
    {
        cout<<"Area of circle = "<<(PI*radius*radius)<<" sq. units"<<endl;
    }
    void perimeter()
    {
            cout<<"Perimeter of circle = "<<(2*PI*radius)<<" units"<<endl;
    }
};
class Rectangle:public Shape2D
{
    public:
    Rectangle(double l,double b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout<<"Area of rectangle = "<<(length*breadth)<<" sq. units"<<endl;
    }
    void perimeter()
    {
        cout<<"Perimeter of rectangle = "<<(2*(length+breadth))<<" units"<<endl;
    }
};
int main()
{
    Circle C1(5),C2(6),C3(7);
    Rectangle R1(3,4),R2(5,6);
    Shape2D *ptrShape[5];
    ptrShape[0] = &C1;
    ptrShape[1] = &C2;
    ptrShape[2] = &C3;
    ptrShape[3] = &R1;
    ptrShape[4] = &R2;
    cout<<"--------------------------------------"<<endl;
    for (int i = 0; i < 5; i++)
    {
        ptrShape[i]->area();
        ptrShape[i]->perimeter();
        cout<<"--------------------------------------"<<endl;
    }
    return 0;
}
//OOP 44 - Inheritance using Shape, TwoDShape, ThreeDShape, Circle, Triangle, Ellipse, Sphere and Cube
#include<iostream>
#include<vector>
#define PI 3.14
using namespace std;
class Shape
{
    protected:
    double length,breadth,height,radius,base,altitude,semiMajorAxis,semiMinorAxis,side;
    public:
    virtual void getFullDetails() = 0;
};
class TwoDShape: public Shape
{
    public:
    virtual void getArea() = 0;
};
class ThreeDShape: public Shape
{
    public:
    virtual void getArea() = 0;
    virtual void getVolume() = 0;
};
class Circle:public TwoDShape
{
    public:
    Circle(double r)
    {
        radius = r;
    }
    void getArea()
    {
        cout<<"Area of circle = "<<(PI*radius*radius)<<" sq. units"<<endl;
    }
    void getFullDetails()
    {
        cout<<"Name of shape : Circle"<<endl;
        getArea();
    }
};
class Triangle:public TwoDShape
{
    public:
    Triangle(double b,double h)
    {
        base = b;
        altitude = h;
    }
    void getArea()
    {
        cout<<"Area of triangle = "<<(0.5*base*altitude)<<" sq. units"<<endl;
    }
    void getFullDetails()
    {
        cout<<"Name of shape : Triangle"<<endl;
        getArea();
    }
};
class Ellipse:public TwoDShape
{
    public:
    Ellipse(double a,double b)
    {
        semiMajorAxis = a;
        semiMinorAxis = b;
    }
    void getArea()
    {
        cout<<"Area of ellipse = "<<(PI*semiMajorAxis*semiMinorAxis)<<" sq. units"<<endl;
    }
    void getFullDetails()
    {
        cout<<"Name of shape : Ellipse"<<endl;
        getArea();
    }
};
class Sphere: public ThreeDShape
{
    public:
    Sphere(double r)
    {
        radius = r;
    }
    void getArea()
    {
        cout<<"Area of sphere = "<<(4*PI*radius*radius)<<" sq. units"<<endl;
    }
    void getVolume()
    {
        cout<<"Volume of sphere = "<<(float(4/3)*PI*radius*radius*radius)<<" cu. units"<<endl;
    }
    void getFullDetails()
    {
        cout<<"Name of shape : Sphere"<<endl;
        getArea();
        getVolume();
    }
};
class Cube: public ThreeDShape
{
    public:
    Cube(double a)
    {
        side = a;
    }
    void getArea()
    {
        cout<<"Area of cube = "<<(side*side)<<" sq. units"<<endl;
    }
    void getVolume()
    {
        cout<<"Volume of cube = "<<(side*side*side)<<" cu. units"<<endl;
    }
    void getFullDetails()
    {
        cout<<"Name of shape : Cube"<<endl;
        getArea();
        getVolume();
    }
};
int main()
{
    Circle C(5);
    Triangle T(3,4);
    Ellipse E(5,6);
    Sphere S(5);
    Cube B(6);
    vector<Shape*> ptrShape;
    ptrShape.push_back(&C);
    ptrShape.push_back(&T);
    ptrShape.push_back(&E);
    ptrShape.push_back(&S);
    ptrShape.push_back(&B);
    cout<<"--------------------------------------"<<endl;
    for (int i = 0; i < ptrShape.size(); i++)
    {
        ptrShape[i]->getFullDetails();
        cout<<"--------------------------------------"<<endl;
    }
    return 0;
}
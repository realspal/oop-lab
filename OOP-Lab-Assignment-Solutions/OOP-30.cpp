//OOP 30 - Operator overloading in Point class
#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    double x,y;
    public:
    Point()
    {
        x=0;
        y=0;
    }
    Point(double x,double y)
    {
        this->x = x;
        this->y = y;
    }
    Point operator-(Point P)
    {
        Point newP;
        newP.x = this->x - P.x;
        newP.y = this->y - P.y;
        return newP;
    }
    double calculateDistance()
    {
        double distance = pow((x*x+y*y),0.5); 
        return distance;
    }
    void display()
    {
        cout<<"("<<x<<","<<y<<")";
    }
};
int main()
{
    Point P1(8,2),P2(3,4);
    Point P3 = P1-P2;
    cout<<"Distance between ";
    P1.display();
    cout<<" and ";
    P2.display();
    cout<<" = "<<P3.calculateDistance()<<" units";
    return 0;
}
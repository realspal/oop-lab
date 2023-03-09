//OOP 18 - Distance between points
#include<iostream>
#include<cmath>
using namespace std;
class Point
{ 
    public:
    int x,y,z;
    Point()
    { 
        x=0;
        y=0;
        z=0;
    }
    Point(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    double distance(Point P)
    { 
        double d;
        int x3=(this->x)-P.x;
        int y3=(this->y)-P.y;
        int z3=(this->z)-P.z;
        d=pow((x3*x3+y3*y3+z3*z3),0.5);
        return d;
    }
};  
int main()
{
    int a,b,c;
    cout<<"Enter (x,y,z) coordinates of point P1 : ";
    cin>>a>>b>>c;
    Point P1;
    P1.x=a;
    P1.y=b;
    P1.z=c;
    cout<<"Enter (x,y,z) coordinates of point P2 : ";
    cin>>a>>b>>c;
    Point P2(a,b,c);
    cout<<"Distance between P1 and P2 = "<<P1.distance(P2)<<" units"<<endl;
    return 0;
}
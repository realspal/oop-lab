//OOP 6 - Area of circle
#include<iostream>
#define PI 3.14159
using namespace std;
class Circle
{
    float r,a;
    public:
    Circle()
    {
        r=0.0f;
        a=0.0f;
    }
    void getRadius()
    {
        cout<<"Enter radius : ";
        cin>>r;
    }
    void printArea()
    {
        a=PI*r*r;
        cout<<"Area = "<<a<<" sq. units"<<endl;
    }
};    
int main()
{
    Circle obj;
    obj.getRadius();
    obj.printArea();
    return 0;
}
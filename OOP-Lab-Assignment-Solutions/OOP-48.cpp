//OOP 48 - Avoiding vehicle collisions using exception handling
#include<iostream>
using namespace std;
class Vehicle
{
    public:
    double width;
    Vehicle(double width)
    {
        this->width = width;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter width of vehicle A   : ";
    cin>>x;
    cout<<"Enter width of vehicle B   : ";
    cin>>y;
    cout<<"Enter width of double-lane : ";
    cin>>z;
    Vehicle A(x),B(y);
    double lane_width = z;
    try
    {
        if(A.width + B.width >= lane_width)
            throw "Collision occured.";
        cout<<"Passed successfully."<<endl;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}
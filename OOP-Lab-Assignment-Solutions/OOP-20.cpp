//OOP 20 - Wireless device
#include<iostream>
#include<cmath>
using namespace std;
class Point
{ 
    public:
    double x,y;
    Point()
    { 
        x=0.0;
        y=0.0;
    }
    void setPoint(double x,double y)
    {
        this->x=x;
        this->y=y;
    }
};
class Device
{
    public:
    Point P;
    int uid;
    double range;
    Device()
    {
        Point pt;
        this->P=pt;
        this->uid=0;
        this->range=0.0;
    }
    void setDevice(Point P,int uid,double range)
    {
        this->P=P;
        this->uid=uid;
        this->range=range;
    }
    double distance(Device D)
    {
        double x3=this->P.x-D.P.x;
        double y3=this->P.y-D.P.y;
        double d=pow((x3*x3+y3*y3),0.5);
        return d;
    }
};
int main()
{
    Device arr[10];
    Point p;
    int x,y,r,u;
    cout<<"Enter Unique ID, Transmission Range, and initial X-Coordinate, Y-Coordinate of 10 wireless devices :"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>u>>r>>x>>y;
        p.setPoint(x,y);
        arr[i].setDevice(p,u,r);
    }
    cout<<endl<<"FINDING NEIGHBOURS BASED ON INITIAL LOCATION DATA . . ."<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(j==i)
            continue;
            int d=arr[i].distance(arr[j]);
            if(d<=arr[i].range)
            {
                if(d!=0)
                cout<<"Neighbour of UID-"<<arr[i].uid<<" is UID-"<<arr[j].uid<<"."<<endl;
                else
                cout<<"Neighbour of UID-"<<arr[i].uid<<" is UID-"<<arr[j].uid<<" (same location)."<<endl;
            }
        }
        cout<<endl;
    }
    cout<<"Enter new X-Coordinate, Y-Coordinate of 10 wireless devices :"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>x>>y;
        p.setPoint(x,y);
        arr[i].setDevice(p,arr[i].uid,arr[i].range);
    }
    cout<<endl<<"FINDING NEIGHBOURS BASED ON NEW LOCATION DATA . . ."<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(j==i)
            continue;
            int d=arr[i].distance(arr[j]);
            if(d<=arr[i].range)
            {
                if(d!=0)
                cout<<"Neighbour of UID-"<<arr[i].uid<<" is UID-"<<arr[j].uid<<"."<<endl;
                else
                cout<<"Neighbour of UID-"<<arr[i].uid<<" is UID-"<<arr[j].uid<<" (same location)."<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
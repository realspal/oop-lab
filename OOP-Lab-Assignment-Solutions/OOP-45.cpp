//OOP 45 - Virtual destructor
#include<iostream>
using namespace std;
class Base
{
    public:
    virtual ~Base()
    {
        cout<<"Base Destructor called."<<endl;
    }
};
class Derived : public Base
{
    public:
    ~Derived()
    {
        cout<<"Derived Destructor called."<<endl;
    }
};
int main()
{
    Base *ptr = new Derived(); 
    //Base class pointer pointing to a derived class object
    delete ptr;
    //If we don't declare base class destructor as virtual then base class destructor
    //will be called instead of calling derived class destructor and so we will be unable
    //to delete derived class object and we may endup having memory leak. So in these
    //cases we should declare the base class destructor as virtual.
    return 0;
}
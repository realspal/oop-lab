//OOP 39 - Implementation of given class hierarchy
#include<iostream>
using namespace std;
class Base1
{
};
class Base2
{
};
class Derived:public Base1,public Base2
{
};
int main()
{
    Derived D;
    Base1 B1;
    Base2 B2;
    return 0;
}
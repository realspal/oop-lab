//OOP 40 - Implementation of given class hierarchy
#include<iostream>
using namespace std;
class A
{
};
class B
{
};
class C
{
};
class D:public A,public B
{
};
class E:public B,public C
{
};
class F:public D,public E
{
};
int main()
{
    F f;
    D d;
    E e;
    A a;
    B b;
    C c;
    return 0;
}
//OOP 35 - Implementation of given program
#include<iostream>
using namespace std;
class Integer
{
    public:
    int x;
    Integer(){}
    Integer(int x)
    {
        this->x = x;
    }
    Integer operator+(Integer b)
    {
        Integer p;
        p.x = this->x + b.x;
        return p;
    }
    Integer operator++(int)
    {
        Integer a;
        a.x=x;
        x+=1;
        return a;
    }
    operator int()
    {
        return x;
    }
};
int main() 
{
 	Integer a = 4, b = a, c;
    c = a+b++;
    int i = a;
    cout << a << b << c;
    return 0;
}
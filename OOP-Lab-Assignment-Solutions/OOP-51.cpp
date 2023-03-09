//OOP 51 - Template class for implementation of stack
#include<iostream>
#include<stack>
using namespace std;
template<typename T>
class Complex
{
    public:
    T real,img;
    Complex(T real,T img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        if(img<0)
        cout<<real<<" - "<<(0-img)<<"i";
        else
        cout<<real<<" + "<<img<<"i";
    }
};
int main()
{
    stack<int> S_int;
    S_int.push(10);
    S_int.push(20);
    S_int.push(30);
    S_int.push(40);
    S_int.push(50);
    S_int.push(60);
    S_int.pop();
    cout<<"S_int : ";
    while(S_int.size()!=0)
    {
        cout<<S_int.top()<<" ";
        S_int.pop();
    }
    cout<<endl;
    stack<Complex<int>> S_comp;
    Complex<int> C1(1,2),C2(2,3),C3(3,4),C4(4,5),C5(5,6),C6(6,7);
    S_comp.push(C1);
    S_comp.push(C2);
    S_comp.push(C3);
    S_comp.push(C4);
    S_comp.push(C5);
    S_comp.push(C6);
    S_comp.pop();
    cout<<"S_comp : ";
    while(S_comp.empty() != 1)
    {
        S_comp.top().display();
        S_comp.pop();
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
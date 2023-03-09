//OOP 24 - Constant member functions and mutable data members
#include<iostream>
using namespace std;
class Sample
{
	int a; //non-constant non-mutable data member
	const int b; //constant data member
	mutable int c; //mutable data member
	public:
	Sample(int a=0,int c=0):b(20)
	{
		this->a=a;
		this->c=c;
		//this->a=a;	
	}
	void fun1() //non-constant member function
	{
		cout<<"fun1() called."<<endl;
		a++;
		//b++;
		c++;
		cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
	}
	void fun2() const //constant member function
	{
		cout<<"fun2() called."<<endl;
		//a++;
		//b++;
		c++;
		cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
	}	
};
int main()
{
	Sample s1(10,30);
	const Sample s2(10,30);
	cout<<"Object s1 :"<<endl;
	s1.fun1();
	s1.fun2();
	cout<<"Object s2 :"<<endl;
	//s2.fun1();
	s2.fun2();
	return 0;
}
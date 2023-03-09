//OOP 33 - Implementation of given program
#include<iostream>
using namespace std;
class INT
{ 
    int i; 
    public : 
    INT(int a):i(a) {}
    ~INT() {} 
    INT &operator++() //pre increment (++i)
    {       
        i+=1;
        return *this;
    }
    /* OR
    INT operator++()
    {
    	i+=1;
		INT newI(i);
    	return newI;
	}
    */
    INT operator++(int) //post increment (i++)
    {   
        INT newI(i);
        i+=1;
        return newI;
    }
    operator int() // converting to int
    { 
        return i;
    }
};
int main()
{ 
    int x=3;
    cout<<"int x=3;     Now x="<<x<<endl;
    INT y=x; 
    cout<<"INT y=x;     Now y="<<y<<endl;
    y++=++y;
    cout<<"y++=++y;     Now y="<<y<<endl;
    x=y;
    cout<<"x=y;         Now x="<<x<<endl;
    return 0;
}
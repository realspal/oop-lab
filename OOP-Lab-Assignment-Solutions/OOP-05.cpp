//OOP 5 - Celsius to Fahrenheit conversion table
#include<iostream>
using namespace std;
class Temperature
{
    int sp;
    public:
    Temperature()
    {
        sp=1;
    }
    void getSpacing()
    {
        cout<<"Enter spacing between values : ";
        cin>>sp;
    }
    void printTable()
    {
        for(int c=0;c<=100;c+=sp)
        cout<<c<<" degree C = "<<(9.0*c/5.0+32.0)<<" degree F"<<endl;
    }
};    
int main()
{
    Temperature obj;
    obj.getSpacing();
    obj.printTable();
    return 0;
}
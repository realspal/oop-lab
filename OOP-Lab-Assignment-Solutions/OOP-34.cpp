//OOP 34 - Implementation of given program
#include<iostream>
using namespace std;
class IntArray
{
    public:
    int *arr;
    int size;
    int index;
    IntArray(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    IntArray operator[](int index)
    {
        this->index = index;
        return *this;
    }
    IntArray operator=(int value)
    {
        this->arr[index] = value;
        return *this;
    }
};
ostream &operator<<(ostream &out,const IntArray &x)
{
    for (int i = 0; i < 10; i++)
        out<<x.arr[i]<<"  ";
    return out;
}
int main() 
{
    IntArray i(10); 
    for(int k = 0; k < 10; k++) 
        i[k] = k;
    cout << i; 
    return 0;
}
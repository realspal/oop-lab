//OOP 47 - Stack with exception handling
#include<iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int capacity;
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }
    void push(int data)
    {
        try
        {
            if(size == capacity)
            {
                throw "Stack Full !!";
            }
            arr[size] = data;
            size++;
        }
        catch(const char *errorMessage)
        {
            cout<<errorMessage<<endl;
        }
    }
    bool isEmpty()
    {
        return size == 0;
    }
    int pop()
    {
        try
        {
            if(size==0)
                throw "Stack Empty !!";
            size--;
            return arr[size];
        }
        catch(const char *error)
        {
            cout<<error<<endl;
        }
        return -1;
    }
    void display()
    {
        try
        {
            if(size == 0)
                throw "Stack Empty !!";
            for (int i = 0; i < size; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
        catch(const char *error)
        {
            cout<<error<<endl;
        }
    }
};
int main(){
    Stack S(5);
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.push(60);
    S.display();
    cout<<"Pop : "<<S.pop()<<endl;
    S.display();
    return 0;
}
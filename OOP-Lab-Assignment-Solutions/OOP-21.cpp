//OOP 21 - Operations on Vector class
#include<iostream>
using namespace std;
class Vector
{
    public:
    int *arr,size;
    Vector(int *arr2,int n)
    {
        size=n;
        arr=new int[size];
        for(int i=0;i<size;i++)
        arr[i]=arr2[i];
    }
    Vector(int n=0)
    {
        size=n;
        for(int i=0;i<size;i++)
        arr[i]=0;
    }
    Vector(const Vector &ob)
    {
        size=ob.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        arr[i]=ob.arr[i];
    }
    void resize(int newsize)
    {
        int arr2[size];
        for(int i=0;i<size;i++)
        arr2[i]=arr[i];
        arr=new int[newsize];
        for(int i=0;i<((newsize<size)?newsize:size);i++)
        arr[i]=arr2[i];
        for(int i=size;i<newsize;i++)
        arr[i]=0;
        size=newsize;
    }
    Vector addvector(const Vector &ob)
    {
        int x=(size>ob.size)?size:ob.size;   
        int arr3[x];
        if(size>ob.size)
        {
            for(int i=0;i<size;i++)
            arr3[i]=arr[i];
            for(int i=0;i<ob.size;i++)
            arr3[i]+=ob.arr[i];
        }
        else
        {
            for(int i=0;i<ob.size;i++)
            arr3[i]=ob.arr[i];
            for(int i=0;i<size;i++)
            arr3[i]+=arr[i];
        }
        Vector ob2(x);
        for(int i=0;i<x;i++)
        ob2.arr[i]=arr3[i];
        return ob2;
    }
    Vector subvector(const Vector &ob)
    {
        int x=(size>ob.size)?size:ob.size;   
        int arr3[x];
        for(int i=0;i<((size<ob.size)?size:ob.size);i++)
        arr3[i]=arr[i]-ob.arr[i];
        if(size>ob.size)
        for(int i=ob.size;i<size;i++)
        arr3[i]=arr[i];
        else if(size<ob.size)
        for(int i=size;i<ob.size;i++)
        arr3[i]=0-ob.arr[i];
        Vector ob2(x);
        for(int i=0;i<x;i++)
        ob2.arr[i]=arr3[i];
        return ob2;
    }
    void compare(Vector ob)
    {
        if(size!=ob.size)
        cout<<"Different lengths. Cannot compare elements."<<endl;
        else
        {
            int flag=0;
            for(int i=0;i<size;i++)
            {
                if(arr[i]<ob.arr[i])
                {
                    flag=1;
                    cout<<"First array < Second array (at first point of difference)"<<endl;
                    break;
                }
                else if(arr[i]>ob.arr[i])
                {
                    flag=1;
                    cout<<"First array > Second array (at first point of difference)"<<endl;
                    break;
                }
            }
            if(flag==0)
            cout<<"First array = Second array"<<endl;
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
        cout<<endl;
    }
};
int main()
{
    Vector v1(5);
    cout<<"v1 is : ";
    v1.display();
    int ar[]={1,2,3,4,5};
    Vector v2(ar,5);
    cout<<"v2 is : ";
    v2.display();
    Vector v3=v2;
    cout<<"v3 is : ";
    v3.display();
    cout<<"Comparing v2 and v3 : ";
    v2.compare(v3);
    int ar2[]={0,1,1};
    Vector v4(ar2,3);
    cout<<"v4 is : ";
    v4.display();
    cout<<"Adding v4 to v2..."<<endl;
    v2=v2.addvector(v4);
    cout<<"v2 is : ";
    v2.display();
    cout<<"Comparing v2 and v3 : ";
    v2.compare(v3);
    cout<<"Subtracting v4 from v2..."<<endl;
    v2=v2.subvector(v4);
    cout<<"v2 is : ";
    v2.display();
    cout<<"Comparing v2 and v3 : ";
    v2.compare(v3);
    return 0;
}
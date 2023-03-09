//OOP 22 - Operations on IntArray class
#include<iostream>
using namespace std;
class IntArray
{
    public:
    int *arr,size;
    IntArray(int *arr2,int n)
    {
        size=n;
        arr=new int[size];
        for(int i=0;i<size;i++)
        arr[i]=arr2[i];
    }
    IntArray(int n=0)
    {
        size=n;
        for(int i=0;i<size;i++)
        arr[i]=0;
    }
    IntArray(const IntArray &ob)
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
    IntArray addIntArray(const IntArray &ob)
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
        IntArray ob2(x);
        for(int i=0;i<x;i++)
        ob2.arr[i]=arr3[i];
        return ob2;
    }
    IntArray subIntArray(const IntArray &ob)
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
        IntArray ob2(x);
        for(int i=0;i<x;i++)
        ob2.arr[i]=arr3[i];
        return ob2;
    }
    void compare(IntArray ob)
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
    void concat(IntArray ob)
    {
        resize(size+ob.size);
        for(int i=0;i<ob.size;i++)
        arr[size+i]=ob.arr[i];
    }
    void reverse()
    {
        for(int i=0;i<size/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=temp;
        }
    }
    void sort()
    {
        int i,j,temp,sorted=0;
        for(i=0;i<size-1 && sorted==0;i++)
        {
            sorted=1;
            for(j=0;j<size-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    sorted=0;
                }
            }
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
    int arr[]={1,2,3};
    IntArray arr1(arr,3);
    cout<<"arr1 is : ";
    arr1.display();
    IntArray arr2=arr1;
    cout<<"arr2 is : ";
    arr2.display();
    cout<<"Reversing arr2 ..."<<endl;
    arr2.reverse();
    cout<<"arr1 is : ";
    arr1.display();
    cout<<"arr2 is : ";
    arr2.display();
    return 0;
}
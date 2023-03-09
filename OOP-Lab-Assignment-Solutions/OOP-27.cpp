//OOP 27 - Operations on circular queue
#include<iostream>
using namespace std;
class Queue
{
    int *data,front,rear,size,capacity;
    public:
    Queue(int n)
    {
        data=new int[n];
        capacity=n;
        front=-1;
        rear=-1;
        size=0;
    }
    void add(int x)
    {
        if(size==capacity)
        cout<<"Queue overflow!"<<endl;
        else
        {
            rear=(rear+1)%capacity;
            data[rear]=x;
            size++;
            if(size==1)
            front=0;
        }
    }
    int rem()
    {
        if(size==0)
        cout<<"Queue underflow!"<<endl;
        else
        {
            int num=data[front];
            front=(front+1)%capacity;
            size--;
            if(size==0)
            {
                front=-1;
                rear=-1;
            }
            return num;
        }
        return -1;
    }
    void disp()
    {
        cout<<"Queue elements (front to end) : "<<endl;
        if(front<=rear)
        for(int i=front;i<=rear;i++)
        cout<<data[i]<<"  ";
        else
        {
            for(int i=front;i<=capacity-1;i++)
            cout<<data[i]<<"  ";
            for(int i=0;i<=rear;i++)
            cout<<data[i]<<"  ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue *cq=new Queue(10);
    for(int i=2;i<=5;i++)
    {
        cq->add(i);
        cout<<"Added "<<i<<" to circular queue."<<endl;
    }
    for(int i=1;i<=2;i++)
    cout<<"Removed "<<(cq->rem())<<" from circular queue."<<endl;
    cq->disp();
    return 0;
}
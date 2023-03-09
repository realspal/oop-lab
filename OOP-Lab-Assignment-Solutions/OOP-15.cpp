//OOP 15 - Overloaded functions to find maximum number
#include<iostream>
using namespace std;
class Maximum
{
    public:
    int getmax(int x,int y,int z)
    {
        return (x>y)?(x>z)?x:z:(y>z)?y:z;
    }
    int getmax(int arr[],int n)
    {
        int max=arr[0];
        for(int i=1;i<n;i++)
        if(arr[i]>max)
        max=arr[i];
        return max;
    }
};    
int main()
{
    Maximum obj;
    int a,b,c;
    cout<<"Enter three integers : ";
    cin>>a>>b>>c;
    int max1=obj.getmax(a,b,c);
    cout<<"Maximum = "<<max1<<endl;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max2=obj.getmax(arr,n);
    cout<<"Maximum = "<<max2<<endl;
    return 0;
}
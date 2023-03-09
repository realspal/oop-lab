//OOP 16 - Overloaded functions to print vector and matrix
#include<iostream>
using namespace std;
class Printing
{
    public:
    void print(int *arr,int n)
    {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
        cout<<endl;
    }
    void print(int **arr,int m,int n)
    {
        for(int i=0;i<m;i++)
        { 
            for(int j=0;j<n;j++)
            cout<<arr[i][j]<<"  ";
            cout<<endl;
        }
    }
};    
int main()
{
    Printing ob;
    int n,r,c;
    cout<<"Enter number of elements in 1D array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter "<<n<<" elements in 1D array : ";
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    ob.print(arr1,n);
    cout<<"Enter number of rows in 2D array : ";
    cin>>r;
    cout<<"Enter number of columns in 2D array : ";
    cin>>c;
    int **arr2=new int*[r];
    for(int k=0;k<r;k++)
    arr2[k]=new int[c];
    cout<<"Enter "<<(r*c)<<" elements in 1D array row-wise : ";
    for(int i=0;i<r;i++)
    { 
        for(int j=0;j<c;j++)
        cin>>arr2[i][j];
    }
    ob.print(arr2,r,c);
    return 0;
}
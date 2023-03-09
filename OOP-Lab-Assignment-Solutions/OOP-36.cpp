//OOP 36 - Implementation of given code segment
#include<iostream>
using namespace std;
class Table
{
    public:
    int **matrix;
    int row,col;
    Table(int x,int y)
    {
        this->row = x;
        this->col = y;
        matrix = new int*[row];
        for (int i = 0; i < row; i++)
            matrix[i] = new int[col];
    }
    int *operator[](int r) // matrix.op[r] -> matrix[r];
    {  
            return matrix[r];
    }
    int operator[](short int c) // matrix[r].op[c] -> matrix[r][c]
    {    
        return matrix[row][c];
    }
};
istream &operator>>(istream &in, Table &T) // overloading >> operator
{   
    for (int i = 0; i < T.row; i++)
        for (int j = 0; j < T.col; j++)
            in>>T.matrix[i][j];
    return in;
}
ostream &operator<<(ostream &out,const Table &T) // overloading << operator
{ 
    for (int i = 0; i < T.row; i++)
    {
        for (int j = 0; j < T.col; j++)
            out<<T.matrix[i][j]<<"    ";
        cout<<endl;
    }
    return out;
}
int main()
{
    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
    return 0;
}
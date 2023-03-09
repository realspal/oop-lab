//OOP 28 - Grade card and CGPA calculation
#include<iostream>
#include<cstring>
#define noOfSubject 5
using namespace std;
class GradeCard
{
    string dname;
    int semester;
    string *subject;
    int *marks;
    public:
    string sname;
    int rollnum;
    double CGPA;
    void setData(string dname,string sname,int roll,int sem,string sub[],int marks[])
    {
        this->dname = dname;
        this->sname = sname;
        this->rollnum = roll;
        this->semester = sem;
        this->subject=new string[noOfSubject+1];
        for (int i = 0; i < noOfSubject; i++)
            this->subject[i] = sub[i];
        this->marks = new int[noOfSubject];
        for (int i = 0; i < noOfSubject; i++)
            this->marks[i] = marks[i];
        int sum_marks=0;
        for (int i = 0; i < noOfSubject; i++)
            sum_marks += this->marks[i];
        this->CGPA = sum_marks/(noOfSubject*10.0);
    }
};
int getHighest(GradeCard G[],int num)
{
    double max_CGPA = 0,index;
    for (int i = 0; i < num; i++)
    {
        if(G[i].CGPA > max_CGPA)
        {
            max_CGPA = G[i].CGPA;
            index = i;
        }
    }
    return index;
}
int main()
{
    GradeCard G[6];
    string sub[] = {"DSA","OOPS","DBMS","ASM","COA"};
    int marks[6][5] = {{95,90,90,85,85},{99,96,94,86,90},{94,87,93,95,86},{94,94,90,85,89},{86,92,86,87,90},{88,90,92,84,85}};
    G[0].setData("CSE","Seth Grayson",12,3,sub,marks[0]);
    G[1].setData("IT","Douglas Stamper",22,3,sub,marks[1]);
    G[2].setData("ETCE","Remy Danton",32,3,sub,marks[2]);
    G[3].setData("EE","Garrett Walker",42,3,sub,marks[3]);
    G[4].setData("IEE","Will Conway",52,3,sub,marks[4]);
    G[5].setData("ME","Mark Usher",62,3,sub,marks[5]);
    int highIndex = getHighest(G,6);
    cout<<G[highIndex].sname<<" (Roll No. : "<<G[highIndex].rollnum<<") has scored the highest CGPA ("<<G[highIndex].CGPA<<")."<<endl;
    return 0;
}
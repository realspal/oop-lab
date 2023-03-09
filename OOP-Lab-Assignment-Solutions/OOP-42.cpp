//OOP 42 - Inheritance using Employee, Manager and Clerk
#include<iostream>
using namespace std;
class Employee
{
    protected:
    string name;
    double salary;
    public:
    double totalSalary;
    void setData(string name,double salary)
    {
        this->name = name;
        this->salary = salary;
        totalSalary = salary;
    }
    virtual void printDetails()
    {
        cout<<"-----------Employee-----------"<<endl;
        cout<<"Name      : "<<name<<endl;
        cout<<"Salary    : ? "<<salary<<" /-"<<endl<<endl;
    }
};
class Manager:public Employee
{
    string type;
    public:
    void setData(string name,string type,double salary)
    {
        this->name = name;
        this->type = type;
        this->salary = salary;
        totalSalary = salary;
    }
    void printDetails()
    {
        cout<<"-----------Manager------------"<<endl;
        cout<<"Name      : "<<name<<endl;
        cout<<"Type      : "<<type<<endl;
        cout<<"Salary    : ? "<<salary<<" /-"<<endl<<endl;
    }
};
class Clerk:public Employee
{
    double allowance;
    public:
    void setData(string name,double allowance,double salary)
    {
        this->name = name;
        this->allowance = allowance;
        this->salary = salary;
        totalSalary = salary;
    }
    void printDetails()
    {
        cout<<"-----------Clerk--------------"<<endl;
        cout<<"Name      : "<<name<<endl;
        cout<<"Allowance : ? "<<allowance<<" /-"<<endl;
        cout<<"Salary    : ? "<<salary<<" /-"<<endl<<endl;
    }
};
int main(){
    Employee E1,E2;
    E1.setData("Seth Grayson",75000);
    E2.setData("Remy Danton",68000);
    Manager M1,M2;
    M1.setData("Garrett Walker","General Manager",95000);
    M2.setData("Douglas Stamper","Executive Manager",89000);
    Clerk C1,C2;
    C1.setData("Donald Blythe",9000,36000);
    C2.setData("Hector Mendoza",8000,35000);
    cout<<"\n------------------------------\n\n";
    M1.printDetails();
    C1.printDetails();
    cout<<"------------------------------\n\n";
    Employee *ptrE[6];
    ptrE[0] = &E1;  
    ptrE[1] = &E2;
    ptrE[2] = &M1;  
    ptrE[3] = &M2;
    ptrE[4] = &C1;  
    ptrE[5] = &C2;
    double totalSalaryOfAllEmp = 0;
    for (int i = 0; i < 6; i++)
    {
        ptrE[i]->printDetails();
        cout<<"------------------------------\n\n";
        totalSalaryOfAllEmp += ptrE[i]->totalSalary;
    }
    cout<<"Total Salary : ? "<<totalSalaryOfAllEmp<<" /-"<<endl;
    return 0;
}
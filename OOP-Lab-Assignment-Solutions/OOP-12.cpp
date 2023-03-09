//OOP 12 - Copying strings
#include<iostream>
using namespace std;
void Strcpy(const char **str1,const char **str2)
{
    *str2 = *str1;
}
int main()
{
    const char *source = "Julius Caesar", *target = "Augustus Caesar";
    cout<<"Initially     : source string = "<<source<<" , target string = "<<target<<endl;
    Strcpy(&source,&target);
    cout<<"After copying : source string = "<<source<<" , target string = "<<target<<endl;
    return 0;
}
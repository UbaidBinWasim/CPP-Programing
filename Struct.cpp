#include<iostream>
using namespace std;
#include<string.h>
struct student
{
char name[30];
int roll;
};
int main()
{
struct student stu;
cout<<"Enter Name = "<<endl;
cin>>stu.name[30];
cout<<"Enter Roll = "<<endl;
cin>>stu.roll;
cout<<"Name = "<<stu.name[30]<<endl;
cout<<"Roll No. = "<<stu.roll<<endl;
return 0;
}

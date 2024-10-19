#include<iostream>
#include<string.h>
using namespace std;

struct person
{
char name[25];
int age;
char gender[10];
};
int main()
{
struct person p1;
cout<<"Enter Name Age and Gender of a Person = "<<endl;
getline(cin,p1.name,p1.age,p1.gender);
cout<<"See What You Entered"<<endl;
cout<<p1.name<<endl<<p1.age<<endl<<p1.gender<<endl;
}

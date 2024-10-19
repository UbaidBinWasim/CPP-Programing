/*#include<iostream>
using namespace std;
int main()
{
int a[5], sum=0;
for(int i=0; i<5; i++)
{
cout<<"Enter Any Number = "<<endl;
cin>>a[i];
sum = sum+a[i];
}
cout<<"Sum = "<<sum<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
float a[5], sum=0;
for(int i=0; i<5; i++){
cout<<"Enter 5 Numbers For Sum = "<<endl;
cin>>a[i];
sum = sum + a[i];
}
cout<<"Sum Of 5 Numbers = "<<sum<<endl;
}*/

/*#include<iostream>
using namespace std;
int main()
{
char name[]={"Ubaidullah"};
puts(name);
cout<<name;
}*/

/*#include<iostream>
using namespace std;
int main()
{
char name[30];
cout<<"Enter Your Name = "<<endl;
gets(name);
}*/

#include<iostream>
using namespace std;
struct student
{
string name; //Student Name
string ID;   //Student ID
string Desc; //Student Description
string marks; //Student Marks
};
int main()
{
student std[1];
for(int i=0;i<=1;i++)
{
cout<<"Enter The Name of Student = "<<endl;
getline(cin,std[i].name);
cout<<"Enter The ID of Student = "<<endl;
getline(cin,std[i].ID);
cout<<"Enter The Description of Student = "<<endl;
getline(cin,std[i].Desc);
cout<<"Enter The Marks of Student = "<<endl;
getline(cin,std[i].marks);
}
int n;
cout<<"Enter the Student Roll No. = "<<endl;
cin>>n;
cout<<"Name = "<<std[n].name<<endl;
cout<<"ID = "<<std[n].ID<<endl;
cout<<"Description = "<<std[n].Desc<<endl;
cout<<"Marks = "<<std[n].marks<<endl;
}

//Choices Calculator by UBD
#include<iostream>
#include<math.h>
using namespace std;
void add();
void sub();
void mul();
void div();

int main()
{
char choice;
cout<<"Enter your choice + - * / "<<endl;
cin>>choice;
if(choice == '+')
add();
else if(choice == '-')
sub();
else if(choice == '*')
mul();
else if(choice == '/')
div();
}

void add()
{
	float a,b,c;
	cout<<"Enter two numbers = "<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"The add of two number is = "<<c<<endl;
}
void sub()
{
	float a,b,c;
	cout<<"Enter two numbers = "<<endl;
	cin>>a>>b;
	c=a-b;
	cout<<"The sub of two number is = "<<c<<endl;
}
void mul()
{
	float a,b,c;
	cout<<"Enter two numbers = "<<endl;
	cin>>a>>b;
	c=a*b;
	cout<<"The mul of two number is = "<<c<<endl;
}
void div()
{
	float a,b,c;
	cout<<"Enter two numbers = "<<endl;
	cin>>a>>b;
	c=a/b;
	cout<<"The division of two number is = "<<c<<endl;
}

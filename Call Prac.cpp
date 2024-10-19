//Ubaid Calling Calculator
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
cout<<"Enter Your Coices + - * / "<<endl;
cin>>choice;
if (choice == '+')
add();
if (choice == '-')
sub();
if (choice == '*')
mul();
if (choice == '/')
div();
}

void add()
{
float a,b,c;
cout<<"Enter Two Values = "<<endl;
cin>>a>>b;
c=a+b;
cout<<"The Sum is = "<<c<<endl;
}

void sub()
{
float a,b,c;
cout<<"Enter Two Values = "<<endl;
cin>>a>>b;
c=a-b;
cout<<"The Subtraction is = "<<c<<endl;
}

void mul()
{
float a,b,c;
cout<<"Enter Two Values = "<<endl;
cin>>a>>b;
c=a*b;
cout<<"The Multiplication is = "<<c<<endl;
}

void div()
{
float a,b,c;
cout<<"Enter Two Values = "<<endl;
cin>>a>>b;
c=a-b;
cout<<"The Division is = "<<c<<endl;

/*char y,n;
cout<<"Press '0' For Close"<<endl;
cin>>y>>n;
if(y=='1'){
cout<<"Closed"<<endl;	
}
else if(n=='0'){
cout<<"Restarting"<<endl;
}*/
}

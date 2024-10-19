#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void addition();
void subtraction();
void multiplication();
void divide();

int main()
{
	char ch
	oice, e, y;
	char E;
	cout<<"\t\t\t\t\t*****Welcome to the Ubaid's Calculator*****"<<endl<<endl;
	do
	{
	cout<<"Choices are + - * / "<<endl;
	cin>>choice;
	if (choice == '+')
	addition();
	else if(choice == '-')
	subtraction();
	else if(choice == '*')
	multiplication();
	else if(choice == '/')
	divide();
	
	cout<<"Restart = y   &   Exit = e "<<endl;
	cout<<"Enter = \t"<<endl;
	cin>>E;
	cout<<endl<<endl;
}   
    while( E == 'y' || E!= 'e' );
	return 0;
	system("pause");
}
    void addition()
{
	
	float a,b,c;
	cout<<"Enter Two Values"<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<c<<endl;
}
    void subtraction()
{
	float a,b,c;
	cout<<"Enter Two Values"<<endl;
	cin>>a>>b;
	c=a-b;
	cout<<c<<endl;
}
    void multiplication()
{
	float a,b,c;
	cout<<"Enter Two Values"<<endl;
	cin>>a>>b;
	c=a*b;
	cout<<c<<endl;
}
    void divide(void)
{
	float a,b,c;
	cout<<"Enter Two Values"<<endl;
	cin>>a>>b;
	c=a/b;
	cout<<c<<endl;
}  

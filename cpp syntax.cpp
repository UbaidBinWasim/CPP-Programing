//Programs Practice

/////////////////////

///table by for loop

/*#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"Enter a Number for Table = "<<endl;
cin>>n;
for(i=1; i<=10; i++)
//2*1=2
cout<<""<<n<<"*"<<i<<"="<<i*n<<endl;
return 0;	
}*/


///using while loop table
/*#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"Enter a Number For Table = "<<endl;
cin>>n;
i = 1;
while(i <= 10)
{
//2*1=2
cout<<""<<n<<"*"<<i<<"="<<i*n<<endl;
i++;
}
}*/

/////////////////////
///do-while loop table
/*#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter a Number for table"<<endl;
cin>>n;
i=1;
do
{
//2*1=2
cout<<""<<n<<"*"<<i<<"="<<i*n<<endl;
i++;	
}
while(i<=10);
}*/

/////////////////////
///Factorial of a Number
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,n;
long long int fact;
cout<<"Enter a Number for Factorial = "<<endl;
cin>>n;
fact=1;
for(i=n; i>=1; i--)
{
fact=fact*i;
}
cout<<"Your factortial is = "<<fact<<endl;
return 0;
}*/

/////////////////////
//Choices Calculator 
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

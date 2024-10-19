#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	float a, b;
	float add, sub, mul;
	float div;
	cout<<"Enter First Number = "<<endl;
	cin>>a;
	cout<<"Enter Second Number = "<<endl;
	cin>>b;
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	cout<<"Addition = "<<add<<endl;
	cout<<"Subtraction = "<<sub<<endl;	
	cout<<"Multiplication = "<<mul<<endl;
    cout<<"Division = "<<div<<endl;
    
	return 0;
}

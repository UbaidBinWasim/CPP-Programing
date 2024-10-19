#include<iostream>
using namespace std;
int main()
{
	int age, ramAge, shyamAge, ajayAge;
	char r, s, a;
	
	cout<<"Enter Ram age = "<<endl;
	cin>>ramAge;
	
	cout<<"Enter Shyam age = "<<endl;
	cin>>shyamAge;
	
	cout<<"Enter Ajay age = "<<endl;
	cin>>ajayAge;
	
	if ( r > s && r > a )
	{
	cout<<"Ram is young"<<endl;
    }
	
    else if ( s > r && s > a )
	{
	cout<<"Shyam is young man"<<endl;
    }
	   
	else 
	{
	cout<<"Ajay is young"<<endl;	
    }   
	return 0;
}

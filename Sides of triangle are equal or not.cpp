/*Sides of Triangle are Equal or not*/
#include<iostream>
using namespace std;
int main()
{
	int angle1, angle2, angle3;
	cout<<"Enter First Angle = "<<endl;
	cin>>angle1;
	cout<<"Enter Second Angle = "<<endl;
	cin>>angle2;
	cout<<"Enter Third Angle = "<<endl;
	cin>>angle3;
	if ( angle1 + angle2 + angle3 == 180 )
	{
	cout<<"Sides are Equal"<<endl;
	}
	else 
	{
	cout<<"Sides are not Equal"<<endl;	
	}
	return 0;
}

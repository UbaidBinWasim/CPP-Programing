/*ARRYS POINTER PRACTICE*/
#include<iostream>
using namespace std;
int main()
{
int num[2][2];
int sum;
for (int i=0; i<3; i++)
{
cout<<"Enter The Marks of Student No."<<i+i<<endl;
for (int j=0; j<2; j++)	
{
cout<<"Enter The Marks of Subject No."<<j+i<<endl;
cin>>num[i][j];
sum=sum+num[i][j];	
}
cout<<"The Average Marks of Student No."<<i+1<<"="<<sum/5<<endl;
sum=0;
}	
return 0;	
}

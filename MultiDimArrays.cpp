#include<iostream>
using namespace std;
int main()

{
int a[2][2],b[2][2],c[2][2],i,j,k,l,m,n;
cout<<"Enter Values = "<<endl;
for(i=0;i<=1;i++)
for(j=0;j<=1;j++)
cin>>a[i][j];

cout<<"First Matrix"<<endl;
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
cout<<a[i][j]<<"\t";
cout<<endl;
}

cout<<"Enter Values = "<<endl;
for(k=0;k<=1;k++)
for(l=0;l<=1;l++)
cin>>b[k][l];
cout<<"Second Matrix"<<endl;
for(k=0;k<=1;k++)
{
for(l=0;l<=1;l++)
cout<<b[k][l]<<"\t";
cout<<endl;
}

cout<<"Sum of Two Matrics is = "<<endl;
for(m=0;m<=1;m++)
for(n=0;n<=1;n++)
c[m][n]=a[m][n]+b[m][n];
for(m=0;m<=1;m++)
{
for(n=0;n<=1;n++)
cout<<c[m][n]<<"\t";
cout<<endl;
}
}

/*Factorial of a Number
#include<iostream>
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

#include<iostream>
using namespace std;
int main()
{
int n,i,fact;
cout<<"Enter a Number for Factorial = "<<endl;
cin>>n;
fact=1;
for(i=n;i>=1;i--)
{
fact=fact*i;
}
cout<<"Your factorial is = "<<fact<<endl;
return 0;
}
















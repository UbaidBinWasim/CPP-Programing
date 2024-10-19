/*Pointers and Arrays*/
#include<iostream>
using namespace std;
int main()
{
int i=3, *x;
float j=1.5, *y;
char k='c',	*z;
cout<<"Value of i= "<<i<<endl;
cout<<"Value of j= "<<j<<endl;
cout<<"Value of k= "<<k<<endl;
x=&i;
y=&j;
z=&k;
cout<<"Orginal address in x= %u"<<x<<endl;
cout<<"Orginal address in y= %u"<<y<<endl;
cout<<"Orginal address in z= %u"<<z<<endl;
x++;
y++;
z++;
cout<<"New address in x= %u"<<x<<endl;
cout<<"New address in y= %u"<<y<<endl;
cout<<"New address in z= %u"<<z<<endl;
return 0;
}

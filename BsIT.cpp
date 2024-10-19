#include<iostream>
using namespace std;
int main()
{
int a = 12, *b, **c, ***d;
b = &a;
*b = 12;
c = &b;
**c = 13;
d = &c;
***d = 15;
cout<<"a = "<<a<<endl;
cout<<"&a = "<<&a<<endl;
cout<<"b = "<<b<<endl;
cout<<"*b = "<<*b<<endl;
cout<<"&b = "<<&b<<endl;
cout<<"*(&a) = "<<*(&a)<<endl;
cout<<"c = "<<c<<endl;
cout<<"*c = "<<*c<<endl;
cout<<"**c = "<<**c<<endl;
cout<<"d = "<<d<<endl;
cout<<"*d = "<<*d<<endl;
cout<<"**d = "<<**d<<endl;
cout<<"***d = "<<***d<<endl;
return 0;
}

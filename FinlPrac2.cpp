#include<iostream>
using namespace std;
void fun (int);
int main()
{
int a = 30;
fun (a);
cout<<"a = "<<a<<endl;
return 0;
}
void fun (int b)
{
b = 60;
cout<<"b = "<<b<<endl;
}

#include<iostream>
using namespace std;
int main()
{
int a[5], mul=1;
for(int i=0; i<5; i++){
cout<<"Enter Any Number = "<<endl;
cin>>a[i];
mul = mul*a[i];
}
cout<<"Multiplication = "<<mul<<endl;
return 0;
}

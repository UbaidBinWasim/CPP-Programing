//check num is prime or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i;
cout<<"Enter a number = "<<endl;
cin>>n;
for(i=2; i<n; i++)
{
if (n%i==0){
cout<<"Number is not prime"<<endl;	
}	
else{
cout<<"Prime"<<endl;
}
return 0;
}
}

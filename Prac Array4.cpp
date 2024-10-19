/*The Real Thing*/
#include<iostream>
using namespace std;
int main()
{
int num[]={24,34,12,44,56,17};
int i;
for(i=0;i<=6;i++)
{
cout<<"Address = "<<&num[i]<<endl;
cout<<"Element = "<<num[i]<<*(num+i)<<endl;
cout<<"New Address = "<<*(i+num)<<i[num]<<endl;	
}
return 0;	
}

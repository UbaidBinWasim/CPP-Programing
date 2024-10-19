//do-while loop table
#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter a Number for table"<<endl;
cin>>n;
i=1;
do
{
//2*1=2
cout<<""<<n<<"*"<<i<<"="<<i*n<<endl;
i++;	
}
while(i<=10);
}

/*Passing Array Elements to a Function*/
/*Demonstration of Call by Value and Call by Ref.*/
#include<iostream>
using namespace std;
void display1(int);
void display2(int *);
int main()
{
int i;
int marks[]={55,65,75,56,78,78,90};
for(i=0;i<=6;i++)
display1(marks[i]);
for(i=0;i<=6;i++)
display2(&marks[i]);
return 0;
}
void display1(int m)
{
cout<<" "<<m<<endl;	
}
void display2(int *n)
{
cout<<" "<<*n<<endl;	
}

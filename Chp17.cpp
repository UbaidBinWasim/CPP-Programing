#include<iostream>
using namespace std;
int main( )
{
struct book
{
char name;
float price;
int pages;
};
struct book b1, b2, b3 ;
cout<<"Enter names, prices & no. of pages of 3 books"<<endl;
cin>>b1.name>>b1.price>>b1.pages;
cin>>b2.name>>b2.price>>b2.pages;
cin>>b3.name>>b3.price>>b3.pages;
cout<<"And this is what you entered"<<endl;
cout<<"Book Price Pages"<<endl;
cout<<b1.name<<"\t"<<b1.price<<"\t"<<b1.pages<<endl;
cout<<b2.name<<"\t"<<b2.price<<"\t"<<b2.pages<<endl;
cout<<b3.name<<"\t"<<b3.price<<"\t"<<b3.pages<<endl;
return 0;
}

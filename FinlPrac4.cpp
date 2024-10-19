#include<iostream>
#include<string.h>
using namespace std;

struct book{
char name[20];
float price;
int pages;	
};

int main()
{ 
struct book b1;
cout<<"Enter Name Price and Pages of a Book = "<<endl;
cin>>b1.name>>b1.price>>b1.pages;
cout<<"Your Details = "<<endl;
cout<<b1.name<<endl<<b1.price<<endl<<b1.pages<<endl;
}

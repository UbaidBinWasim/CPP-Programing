#include<iostream>
#include<string.h>
using namespace std;
#include<string>


struct registration
{
	char un[30]; //UserName
	char EID[30]; //Email ID
	char pw[30]; //PassWord	
};
    
	int login()
{
	char ch[30],ch1[30];
	string UN,PW;
	string usn,pasw;
	FILE *fu,*fp,*fid;
	fu = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\username.c","r");
	fp = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\password.c","r");
	fid = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\ID.c","r");
	
	for(int i=0; true; i++)
{
	ch1[i] = fgetc(fu);
	if(ch1[i] == EOF)
	break;
}
	
	for(int t=0; true; t++)
{
	ch[t] = fgetc(fp);
	if(ch[t] == EOF)
	break;
}

	usn = ch1;
	pasw = ch;
	registration reg;
	cout<<usn<<endl;
	cout<<pasw<<endl;
	cout<<"Enter Username :- "<<endl;
	cin.ignore();
	gets(reg.un);
	cout<<"Enter Password :- "<<endl;
	gets(reg.pw);
	
	UN = reg.un;
	PW = reg.pw;
	int a = UN.compare(usn);
	int b = PW.compare(pasw);
	if(a ==0 && b ==0)
	cout<<"You are Successfully Login"<<endl;
	else
	cout<<"Wrong Information Plz Try Again"<<endl;
	fclose(fu);
	fclose(fp);
	fclose(fid);
	return 0;
}

    int regt()
{
 	int a;
 	FILE *fu,*fp,*fid;
	fu = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\username.c","w");
	fp = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\password.c","w");
	fid = fopen("C:\\Users\\ABC\\Desktop\\UBD\\PROJECT\\Files ID\\ID.c","w");
 	registration reg;
 	
	cout<<"Enter Username :- "<<endl;
	cin.ignore();
	
	gets(reg.un);
	fputs(reg.un,fu);
	
	cout<<"Enter Email ID :- "<<endl;
	gets(reg.EID);
	
	fputs(reg.EID,fid);
	cout<<"Enter Password :- "<<endl;
	gets(reg.pw);
	
	fputs(reg.pw,fp);
	fclose(fu);
	fclose(fp);
	fclose(fid);
	return 0;
}
 
    int main ()
{ 
	registration reg;
	char r,y,n;
	int a;
	cout<<"\t\t\t\t\t|*|*|*|LOGIN AND REGISTRATION PROGRAM|*|*|*|"<<endl;
	r='y'; 
	while(r == 'y')
{
	cout<<"\t\tPress 1 For Login"<<endl;
	cout<<"\t\tPress 2 For Registration"<<endl;
	cin>>a;
	if (a == 1)
{
	login();
}
	else if(a == 2)
{
	regt();
}
	cout<<"Press 'y' For Restart"<<endl;
	cout<<"Press 'n' For Exit"<<endl;  
	cin>>r;
	system("cls");
}
	return 0;
}

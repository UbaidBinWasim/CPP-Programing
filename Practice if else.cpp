#include<iostream>
using namespace std;
int main()
    {
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    if(age<18){
    cout<<"You are not allowed to travel"<<endl;
    }
    else if(age==18){
    cout<<"You are allow to travel"<<endl;    
    }
    else if(age>18) {
    cout<<"You are allow to travel"<<endl;  	
    }
    return 0;
    }

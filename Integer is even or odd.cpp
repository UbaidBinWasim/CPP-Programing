#include <iostream>
using namespace std;
int main()
{
	int number;

    cout<<"Enter any Number = "<<endl;
    cin>>number;

    if (number % 2 == 0) 
	{
        cout<<"Number is an Even Number"<<endl;
    } 
	else 
	{
        cout<<"Number is an Odd Number"<<endl;
    }

    return 0;
    }

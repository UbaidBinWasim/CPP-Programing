/*Issurance of the driver*/
#include<iostream>
using namespace std;
int main()
{
    char ms, gndr, age, M;
    cout<<"Enter Age = "<<age<<endl;
    cout<<"Enter Gender = "<<gndr<<endl;
    cout<<"Marital Status = "<<ms<<endl;
    cin>>ms>>gndr>>ms;
    if (ms==M)
    cout<<"Driver should be insured"<<endl;
    else {
        if (gndr==M)
        { 
            if (age>30)
    cout<<"Driver should be insured"<<endl;
    else
    cout<<"Driver should not be insured"<<endl;
        }
    else
        {
    if (age>25)
    cout<<"Driver should be insured"<<endl;
    else
    cout<<"Driver should not be insured"<<endl;
}
}
return 0;
}

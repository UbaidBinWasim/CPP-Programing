/*Program that tell all things acc to your age*/
#include <iostream>
using namespace std                                 ;
int main()
{
int a, months, weeks, days, hours, minutes, seconds ;
cout<<"Enter your age = "<<endl                     ;
cin>>a;                                             ;
months  = a*12                                      ;
weeks   = months*4                                  ; 
days    = a*365                                     ;
hours   = days*24                                   ;
minutes = hours*60                                  ;
seconds = minutes*60                                ;
cout<<"Months  in your age = "<<months<<endl        ;
cout<<"Weeks   in your age = "<<weeks<<endl         ;
cout<<"Days    in your age = "<<days<<endl          ;
cout<<"Hours   in your age = "<<hours<<endl         ;
cout<<"Minutes in your age = "<<minutes<<endl       ; 
cout<<"Seconds in your age = "<<seconds<<endl       ;
return 0                                            ;
}

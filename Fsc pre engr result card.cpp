/*Program For FSC Pre.Engr Result Card*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int math, phy, chem, eng, urdu, isl;
	
	int matht, phyt, chemt, engt, urdut, islt, pst;
	
	float percent;
	
	int total, obtmark;
	
	cout<<"Enter Your Subjects Marks"<<endl;
	
	cout<<"Marks in Maths out of 100 = "<<endl;
	cin>>math;
	
	cout<<"Marks in Physics out of 85 = "<<endl;
	cin>>phy;
	
	cout<<"Marks in Chemistry out of 85 = "<<endl;
	cin>>chem;
	
	cout<<"Marks in English out 100 = "<<endl;
	cin>>eng;
	
	cout<<"Marks in Urdu out of 100 = "<<endl;
	cin>>urdu;
	
	cout<<"Marks in Islamiyat Or Pak Study out of 50 = "<<endl;
	cin>>isl;
	
	total = 520;
	
	obtmark = math + phy + chem + eng + urdu + isl;
	
	cout<<"Your Total Marks = 520"<<endl;
	
	cout<<"Your Obtain Marks = "<<obtmark<<endl;
	
	percent = (obtmark*100/total); //formula for calculating percentage
	
	cout<<"Your Percentage is = "<<percent<<"%"<<endl;
    
    if (percent>=80)
    cout << "Percentage>80% Your grade is A+ " << endl;
    
    else
    if (percent>=70)
   cout << "Percentage>70<80 Your grade is A " << endl;
    
    else
    if (percent>=60)
	cout << "Percentage>60<70 Your grade is B+ " << endl;
    
    else
    if (percent>=50)
    cout << "Percentage>50<60 Your grade is B " << endl;
    
    else
    cout << "Percentage<50 You are Fail " << endl;
    
    return 0;
}

#include<iostream>
using namespace std;
struct Car{
string company, model;
int year, rgno, rent;
bool rented;
};

displayCar(Car car)
{
cout<<"Company = "<<car.company<<endl;
cout<<"Model = "<<car.model<<endl;
cout<<"Year = "<<car.year<<endl;
cout<<"Registration Number = "<<car.rgno<<endl;
cout<<"Rent in Pak Rs = "<<car.rent<<" per day"<<endl<<endl;
}
int main()
{
Car car123 = {"Toyota","Corolla",123,2005,23000,false};
Car car345 = {"Honda","Civic",345,2020,45000,true};
Car car234 = {"Suzuki","Mehran",234,2013,17000,true};

cout<<"Available Cars = "<<endl;

displayCar(car123);
displayCar(car345);
displayCar(car234);

cout<<"Enter Registration Number = "<<endl;
int choice;
cout<<"Enter Your Choice"<<endl;
cin>>choice;

switch(choice){
case 123:{
if(!car123.rented)
break;
}
	
}

}

